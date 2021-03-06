/*
 * Publication: Semi-Procedural Textures Using Point Process Texture Basis Functions
 * Authors: anonymous
 *
 * Code author: Pascal Guehl
 *
 * anonymous
 * anonymous
 */

/** 
 * @version 1.0
 */

#ifndef _PT_MODEL_LIBRARY_H_
#define _PT_MODEL_LIBRARY_H_

/******************************************************************************
 ******************************* INCLUDE SECTION ******************************
 ******************************************************************************/

// Project
#include "PtModelConfig.h"

/******************************************************************************
 ************************* DEFINE AND CONSTANT SECTION ************************
 ******************************************************************************/

/******************************************************************************
 ***************************** TYPE DEFINITION ********************************
 ******************************************************************************/

/******************************************************************************
 ******************************** CLASS USED **********************************
 ******************************************************************************/

/******************************************************************************
 ****************************** CLASS DEFINITION ******************************
 ******************************************************************************/

namespace Pt
{

class PTMODEL_EXPORT PtDataModelLibrary
{
	
	 /**************************************************************************
     ***************************** PUBLIC SECTION *****************************
     **************************************************************************/

public:

    /******************************* INNER TYPES *******************************/

    /******************************* ATTRIBUTES *******************************/

    /******************************** METHODS *********************************/

    /**
	 * Main GsGraphics module initialization method
	 */
	static bool initialize( const char* const pWorkingDirectory );

	/**
	 * Main GsGraphics module finalization method
	 */
	static void finalize();

   /**************************************************************************
    **************************** PROTECTED SECTION ***************************
    **************************************************************************/

protected:

    /******************************* INNER TYPES *******************************/

    /******************************* ATTRIBUTES *******************************/

    /******************************** METHODS *********************************/

	/**************************************************************************
     ***************************** PRIVATE SECTION ****************************
     **************************************************************************/

private:

    /******************************* INNER TYPES *******************************/

    /******************************* ATTRIBUTES *******************************/

	/**
	 * Flag telling whether or not the library is initialized
	 */
	static bool mIsInitialized;

	/******************************** METHODS *********************************/

};

}

#endif // !_PT_MODEL_LIBRARY_H_
