/*
** EPITECH PROJECT, 2024
** Epi-Graphical-C-Template
** File description:
** my_graphical
*/

#ifndef INCLUDED_MY_GRAPHICAL_H
    #define INCLUDED_MY_GRAPHICAL_H
#include <SFML/Graphics.h>
#include <SFML/Graphics/Export.h>
#include <SFML/Graphics/Color.h>
#include <SFML/Window.h>
#include <SFML/Window/Event.h>
#include <SFML/Window/Mouse.h>
#include <stdlib.h>
#include <stdio.h>
#include "struct_fb.h"
framebuffer_t *framebuffer_create(unsigned int width, unsigned int height);
void framebuffer_destroy(framebuffer_t *framebuffer);
void my_put_pixel(framebuffer_t *framebuffer, unsigned int x, unsigned int y, sfColor color);
#endif /* !INCLUDED_MY_GRAPHICAL */