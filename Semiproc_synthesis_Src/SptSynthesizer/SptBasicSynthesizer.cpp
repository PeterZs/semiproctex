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

#include "SptBasicSynthesizer.h"
 
/******************************************************************************
 ******************************* INCLUDE SECTION ******************************
 ******************************************************************************/

// Project
#include "SptBasicHviewInterface.h"

// System
#include <cassert>

// STL
#include <iostream>
#include <algorithm>
#include <functional>
#include <numeric>
#include <fstream>
#include <sstream>

/******************************************************************************
 ****************************** NAMESPACE SECTION *****************************
 ******************************************************************************/

// Project
using namespace Spt;

/******************************************************************************
 ************************* DEFINE AND CONSTANT SECTION ************************
 ******************************************************************************/

/******************************************************************************
 ***************************** TYPE DEFINITION ********************************
 ******************************************************************************/

/******************************************************************************
 ***************************** METHOD DEFINITION ******************************
 ******************************************************************************/

/******************************************************************************
 * Constructor
 ******************************************************************************/
SptBasicSynthesizer::SptBasicSynthesizer()
:	mHviewInterface( nullptr )
//,	GUIDE( 0.f )
//,	STRENGTH( 0.f )
//,	INITLEVEL( 0 )
//,	BLOCSIZE( 0 )
//,	INITERR( 0.f )
//,	INDEXWEIGHT( 0.f )
{
	// Hview interface
	mHviewInterface = new SptBasicHviewInterface;
}

/******************************************************************************
 * Destructor
 ******************************************************************************/
SptBasicSynthesizer::~SptBasicSynthesizer()
{
	// Hview interface
	delete mHviewInterface;
	mHviewInterface = nullptr;
}

/******************************************************************************
 * Initialize
 ******************************************************************************/
void SptBasicSynthesizer::initialize()
{
	// Hview interface
	mHviewInterface->initialize();
}

/******************************************************************************
 * Finalize
 ******************************************************************************/
void SptBasicSynthesizer::finalize()
{
	// Hview interface
	mHviewInterface->finalize();
}

/******************************************************************************
 * Launch the synthesis pipeline
 ******************************************************************************/
void SptBasicSynthesizer::execute()
{
	// Delegate synthesis to hview interface
	mHviewInterface->execute();
}

/******************************************************************************
 * Save/export synthesis results
 ******************************************************************************/
void SptBasicSynthesizer::saveResults()
{
}
