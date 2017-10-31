#include "ncType.h"

#ifndef NcShortClass
#define NcShortClass

namespace netCDF
{
  
  /*! Class represents a netCDF atomic Short type. */
  class NETCDF_CXX4_API NcShort : public NcType
  {
  public: 
    
    /*! equivalence operator */
    bool operator==(const NcShort & rhs);
    
    /*! destructor */
    ~NcShort();
    
    /*! Constructor */
    NcShort();
  };

  /*! A global instance  of the NcShort class within the netCDF namespace. */
  extern NcShort ncShort;

}
#endif
