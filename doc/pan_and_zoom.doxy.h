/**
 * @taomoduledescription{PanAndZoom, Pan and Zoom}
 *
 * @~english
 * Pan-and-Zoom navigation style for Tao Presentations.
 *
 * PanAndZoom (PAZ) is an interesting presentation navigation model.
 * 
 * The module provides a ready-to-use navigation model.
 *
 * @note Depends on the Animate module.
 *
 * @~french
 * Navigation Pan-and-Zoom.
 *
 * Le module PanAndZoom (PAZ) fournit des commandes pour exploiter un
 * mode d'affichage et de navigation particulier. La page est transformée
 * en une grande surface d'affichage, dont seule une partie est visible.
 * Le passage d'une partie à l'autre consiste en un déplacement (rotation,
 * translation, zoom) d'une zone particulière à une autre.
 *
 * @note Ce module a besoin du module Animate pour fonctionner.
 *
 * @~
 * @endtaomoduledescription{PanAndZoom}
 * @{
 */


/**
 * @~english
 * Create a page containing Pan-and-Zoom contents.
 *
 * The contents of the page is defined by the @a Body variable.
 * There can be only one @ref paz_page per @ref page.
 *
 * @~french
 * Crée une page avec du contenu Pan-and-Zoom.
 *
 * Le contenu est défini par le paramètre @p Body. Il ne peut y avoir qu'un
 * appel à @ref paz_page par @ref page.
 */
paz_page(tree Body);


/**
 * @~english
 * Add an item in a @ref paz_page.
 *
 * The item specified by @a Body is added at coordinates @a X and @a Y.
 * It is rotated by @a Angle degrees, and scaled down by @a Scale.
 * Items draw in @a Body can be selected by a mouse click.
 *
 * @~french
 * Ajoute un élément dans une page @ref paz_page.
 *
 * L'élément décrit par @p Body est ajouté aux coordonnées (@p X, @p Y).
 * Il est tourné d'un angle de @p Angle degrés et réduit ou agrandi d'un
 * facteur @p Scale.
 */
paz (real X, real Y, real Angle, real Scale, tree Body);


/**
 * @~english
 * Add a text box in a @ref paz context.
 *
 * The text box has dimension @a Width x @a Height units and is centered
 * when selected. The contents is defined by @a Body.
 *
 * @~french
 * Ajoute une boîte de texte dans un contexte @ref paz.
 *
 * La boîte de texte a une largeur de @p Width pixels et une hauteur de
 * @p Height pixels. Elle apparaît centrée à l'écran lorsqu'elle est
 * sélectionnée (clic). Le contenu est défini par @p Body.
 */
paz_box(real Width, real Height, tree Body);


/**
 * @~english
 * Add a text box with a rounded rectangle around it
 *
 * This is similar to @ref paz_box, but with an
 * additional @ref rounded_rectangle drawn around it.
 *
 * @~french
 * Ajoute une boîte de texte encadrée dans un contexte @ref paz.
 *
 * Similaire à @ref paz_box, mais avec un rectangle arrondi autour du texte.
 */
paz_rbox(real Width, real Height, tree Body);


/**
 * @~english
 * Execute code in @a Body only if the current @ref paz is selected.
 *
 * @~french
 * Exécute @p Body seulement si le @ref paz courant est sélectionné.
 */
paz_cond(tree Body);


/**
 * @~english
 * Test if the current @ref paz is between @a Start and @a End from this one.
 * 
 * The @a Start and @a End parameters indicate an offset relative to the
 * current @ref paz box.
 *
 * @~french
 * Teste l'élément @ref paz affiché par rapport au @ref paz courant.
 *
 * Dans un élément @ref paz, teste si le @ref paz actuellement affiché est
 * situé entre @p Start at @p End par rapport au bloc @ref paz courant.
 */
paz_between(real Start, real End);


/// Variables

/**
 * @~english
 * Index of the current @ref paz item being executed.
 * @~french
 * Index de l'élément @ref paz en cours d'exécution.
 */
integer pax_index;

/**
 * @}
 */
