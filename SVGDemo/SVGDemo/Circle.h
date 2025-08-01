#pragma once

#include "Ellipse.h"

/**
 * @brief Represents a circle in 2D space.
 *
 * The Circle class is derived from the Ellipse class and defines a circle
 * with a specified radius, center, fill color, stroke color, and stroke
 * thickness.
 */
class Circle : public Ellipse
{
public:
    /**
     * @brief Constructs a Circle object.
     *
     * @param radius The radius of the circle.
     * @param center The center of the circle.
     * @param fill Fill color of the circle.
     * @param stroke Outline color of the circle.
     * @param stroke_width Thickness of the circle outline.
     */
    Circle(float radius, const Vector2Df& center, ColorShape fill, ColorShape stroke, float stroke_width);

    /**
     * @brief Gets the type of the shape.
     *
     * @return The string "Circle".
     *
     */
    std::string getShape() const override;
};

