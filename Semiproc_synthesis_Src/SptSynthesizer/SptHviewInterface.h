/*
 * Publication: Semi-Procedural Textures Using Point Process Texture Basis Functions
 *              Computer Graphics Forum (EGSR 2020 special issue)
 * Authors: P. Guehl , R. AllEgre , J.-M. Dischler, B. Benes , and E. Galin
 *
 * Code author: Pascal Guehl
 */

/** 
 * @version 1.0
 */

#ifndef _SPT_HVIEW_INTERFACE_H_
#define _SPT_HVIEW_INTERFACE_H_

/******************************************************************************
 ******************************* INCLUDE SECTION ******************************
 ******************************************************************************/

// hview
#include <hvPictRGB.h>

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

namespace Spt
{

 /**
  * @class SptHviewInterface
  *
  * @brief The SptHviewInterface class provides interface to the hview software texture synthesis api.
  *
  * SptHviewInterface is an wrapper interaface the hview software texture synthesis api.
  */
class SptHviewInterface
{
	/**************************************************************************
	 ***************************** PUBLIC SECTION *****************************
	 **************************************************************************/

public:

	/******************************* INNER TYPES *******************************/

	/******************************* ATTRIBUTES *******************************/

	/******************************** METHODS *********************************/
	
	/**
	 * Constructor
	 */
	SptHviewInterface();

	/**
	 * Destructor
	 */
	virtual ~SptHviewInterface();

	/**
	 * Initialize
	 */
	void initialize();

	/**
	 * Finalize
	 */
	void finalize();

	/**
	 * Launch the synthesis pipeline
	 */
	void execute();

	/**
	 * Load structure map (binary)
	 *
	 * @param pFilename
	 */
	void loadStructureMap( const char* pFilename );

	/**
	 * Load distance map
	 *
	 * @param pFilename
	 */
	void loadDistanceMap( const char* pFilename );

	/**
	 * Load label map
	 *
	 * @param pFilename
	 */
	void loadLabelMap( const char* pFilename );

	/**************************************************************************
	 **************************** PROTECTED SECTION ***************************
	 **************************************************************************/

protected:

	/******************************* INNER TYPES *******************************/

	/******************************* ATTRIBUTES *******************************/

	//char *name,
	//int STOPATLEVEL,
	//int posx, int posy,
	//const hvPictRGB<T> &example, const hvPictRGB<T> &exdist,
	//double weight, // weight color vs distance
	//double powr, float indweight, int neighbor, int atlevel, int bsize, float ERR,
	//const hvBitmap &mask, const hvPictRGB<T> &guidance,
	//hvArray2<hvVec2<int> > &index

	/******************************** METHODS *********************************/

	/**************************************************************************
	 ***************************** PRIVATE SECTION ****************************
	 **************************************************************************/

private:

	/******************************* INNER TYPES *******************************/

	/******************************* ATTRIBUTES *******************************/

	/******************************** METHODS *********************************/


}; // end of class SptHviewInterface

} // end of namespace Spt

/******************************************************************************
 ******************************* INLINE SECTION ******************************
 ******************************************************************************/

#endif // _SPT_HVIEW_INTERFACE_H_
