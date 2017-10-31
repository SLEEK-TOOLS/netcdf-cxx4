#include "ncType.h"

#ifndef NcDoubleClass
#define NcDoubleClass

namespace netCDF
{
  
  /*! Class represents a netCDF atomic Double type. */
  class NETCDF_CXX4_API NcDouble : public NcType
  {
  public: 
    
    /*! equivalence operator */
    bool operator==(const NcDouble & rhs);
    
    /*!  destructor */
    ~NcDouble();
    
    /*! Constructor */
    NcDouble();
  };

  /*! A global instance  of the NcDouble class within the netCDF namespace. */
  extern NcDouble ncDouble;

}
#endif
