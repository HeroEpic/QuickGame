/**
 * @file Tilemap.h
 * @author Nathan Bourgeois (iridescentrosesfall@gmail.com)
 * @brief 
 * @version 1.0
 * @date 2022-09-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */


#ifndef _TILEMAP_INCLUDED_H_
#define _TILEMAP_INCLUDED_H_

#include <QuickGame.h>

#if __cplusplus
extern "C" {
#endif

/**
 * @brief Gets texture coordinates from an atlas given a position
 * 
 * @param atlas Texture Atlas to use as reference
 * @param buf Buffer to fill with the coordinates
 * @param idx Index of the atlas to get coordinates for
 */
void QuickGame_Atlas_Index_Coords(const QGTextureAtlas atlas, f32* buf, const usize idx);

/**
 * @brief Create a tilemap
 * 
 * @param texture_atlas Texture Atlas size 
 * @param texture Texture to use
 * @param size Size of tile map
 * @return QGTilemap_t Created tilemap or NULL on failure
 */
QGTilemap_t QuickGame_Tilemap_Create(QGTextureAtlas texture_atlas, QGTexture_t texture, QGVector2 size);

/**
 * @brief Adds a tile to the map
 * 
 * @param tilemap Tilemap to insert the tile into
 * @param tile Tile to insert
 */
void QuickGame_Tilemap_Add_Tile(QGTilemap_t tilemap, const QGTile tile);

/**
 * @brief Draws a tilemap to the screen
 * 
 * @param tilemap Tilemap
 */
void QuickGame_Tilemap_Draw(QGTilemap_t tilemap);

/**
 * @brief Builds a tilemap to render
 * 
 * @param tilemap Tilemap
 */
void QuickGame_Tilemap_Build(QGTilemap_t tilemap);

/**
 * @brief Destroy a tilemap
 * 
 * @param tilemap Tile map to destroy -- also gets set to null.
 */
void QuickGame_Tilemap_Destroy(QGTilemap_t* tilemap);
 

#if __cplusplus
};
#endif

#endif