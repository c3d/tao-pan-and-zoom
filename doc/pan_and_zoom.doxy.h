/**
 * @defgroup PanAndZoom Pan and Zoom
 * @ingroup Modules
 *
 * Pan-and-Zoom navigation style for Tao Presentations
 *
 * PanAndZoom (PAZ) is an interesting presentation navigation model
 * 
 * The module provides a ready-to-use navigation model
 *
 * @{
 */


/**
 * Create a page containing Pan-and-Zoom contents
 *
 * The contents of the page is defined by the @a Body variable.
 * There can be only one @ref paz_page per @ref page.
 */

paz_page(tree Body);


/**
 * Add an item in a @ref paz_page. 
 *
 * The item specified by @a Body is added at coordinates @a X and @a Y.
 * It is rotated by @a Angle degrees, and scaled down by @a Scale.
 * Items draw in @a Body can be selected by a mouse click.
 */
paz (real X, real Y, real Angle, real Scale, tree Body);


/**
 * Add a text box in a pan-and-zoom context
 *
 * The text box has dimension @a Width x @a Height units and is centered
 * when selected. The contents is defined by @a Body.
 */
paz_box(real Width, real Height, tree Body);


/**
 * Add a text box with a rounded rectangle around it
 *
 * This is similar to @ref paz_box, but with an
 * additional @ref rounded_rectangle drawn around it.
 */
paz_rbox(real Width, real Height, tree Body);


/**
 * Execute code in @a Body only if the current @ref paz is selected.
 */
paz_cond(tree Body);


/**
 * Test if the current @ref paz is between @a Start and @a End from this one
 * 
 * The @a Start and @a End parameters indicate an offset relative to the
 * current @ref paz box.
 */
paz_between(real Start, real End);


/// Variables

/**
 * Index of the current @ref paz item being executed
 */
integer pax_index;

/**
 * @}
 */
