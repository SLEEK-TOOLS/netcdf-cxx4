#include "ncType.h"

#ifndef NcUbyteClass
#define NcUbyteClass

namespace netCDF
{
  
  /*! Class represents a netCDF atomic Ubyte type. */
  class NETCDF_CXX4_API NcUbyte : public NcType
  {
  public: 
    
    /*! equivalence operator */
    bool operator==(const NcUbyte & rhs);
    
    /*! destructor */
    ~NcUbyte();
    
    /*! Constructor */
    NcUbyte();
  };

  /*! A global instance  of the NcUbyte class within the netCDF namespace. */
  extern NcUbyte ncUbyte;

}
#endif
