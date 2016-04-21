
#include <mpi.h>
#include <math.h>
#include <stdbool.h>
#include "pearson-3d.h"

void
Formura_internal_187 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_81_r_1_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_81_r_2_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_81_r_1_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (2)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_81_r_2_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_81_r_1_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (2)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_81_r_2_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (0)][iy + (2)][iz + (2)] =
            Ridge_0_0_0_Om_81_r_1_1_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (254)] =
            Facet_0_0_1_src_1_0_0_dest_2_1_1_Recv.
            Ridge_0_0_1_Om_81_r_1_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (2)][iy + (0)][iz + (254)] =
            Facet_0_0_1_src_2_0_0_dest_2_1_1_Recv.
            Ridge_0_0_1_Om_81_r_2_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (2)][iz + (254)] =
            Facet_0_0_1_src_1_1_0_dest_2_1_1_Recv.
            Ridge_0_0_1_Om_81_r_1_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (2)][iy + (2)][iz + (254)] =
            Facet_0_0_1_src_2_1_0_dest_2_1_1_Recv.
            Ridge_0_0_1_Om_81_r_2_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (30)][iz + (0)] =
            Facet_0_1_0_src_1_0_0_dest_2_1_1_Recv.
            Ridge_0_1_0_Om_81_r_1_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (2)][iy + (30)][iz + (0)] =
            Facet_0_1_0_src_2_0_0_dest_2_1_1_Recv.
            Ridge_0_1_0_Om_81_r_2_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (0)][iy + (30)][iz + (2)] =
            Facet_0_1_0_src_1_0_1_dest_2_1_1_Recv.
            Ridge_0_1_0_Om_81_r_1_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (2)][iy + (30)][iz + (2)] =
            Facet_0_1_0_src_2_0_1_dest_2_1_1_Recv.
            Ridge_0_1_0_Om_81_r_2_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (30)][iz + (254)] =
            Facet_0_1_1_src_1_0_0_dest_2_1_1_Recv.
            Ridge_0_1_1_Om_81_r_1_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (2)][iy + (30)][iz + (254)] =
            Facet_0_1_1_src_2_0_0_dest_2_1_1_Recv.
            Ridge_0_1_1_Om_81_r_2_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (20)][iy + (0)][iz + (0)] =
            Facet_1_0_0_src_0_0_0_dest_2_1_1_Recv.
            Ridge_1_0_0_Om_81_r_0_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (20)][iy + (2)][iz + (0)] =
            Facet_1_0_0_src_0_1_0_dest_2_1_1_Recv.
            Ridge_1_0_0_Om_81_r_0_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (20)][iy + (0)][iz + (2)] =
            Facet_1_0_0_src_0_0_1_dest_2_1_1_Recv.
            Ridge_1_0_0_Om_81_r_0_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (20)][iy + (2)][iz + (2)] =
            Facet_1_0_0_src_0_1_1_dest_2_1_1_Recv.
            Ridge_1_0_0_Om_81_r_0_1_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (20)][iy + (0)][iz + (254)] =
            Facet_1_0_1_src_0_0_0_dest_2_1_1_Recv.
            Ridge_1_0_1_Om_81_r_0_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (20)][iy + (2)][iz + (254)] =
            Facet_1_0_1_src_0_1_0_dest_2_1_1_Recv.
            Ridge_1_0_1_Om_81_r_0_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (20)][iy + (30)][iz + (0)] =
            Facet_1_1_0_src_0_0_0_dest_2_1_1_Recv.
            Ridge_1_1_0_Om_81_r_0_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (20)][iy + (30)][iz + (2)] =
            Facet_1_1_0_src_0_0_1_dest_2_1_1_Recv.
            Ridge_1_1_0_Om_81_r_0_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (20)][iy + (30)][iz + (254)] =
            Facet_1_1_1_src_0_0_0_dest_2_1_1_Recv.
            Ridge_1_1_1_Om_81_r_0_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_82_r_1_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_82_r_2_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_82_r_1_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (2)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_82_r_2_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_82_r_1_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (2)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_82_r_2_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (0)][iy + (2)][iz + (2)] =
            Ridge_0_0_0_Om_82_r_1_1_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (254)] =
            Facet_0_0_1_src_1_0_0_dest_2_1_1_Recv.
            Ridge_0_0_1_Om_82_r_1_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (2)][iy + (0)][iz + (254)] =
            Facet_0_0_1_src_2_0_0_dest_2_1_1_Recv.
            Ridge_0_0_1_Om_82_r_2_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (2)][iz + (254)] =
            Facet_0_0_1_src_1_1_0_dest_2_1_1_Recv.
            Ridge_0_0_1_Om_82_r_1_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (2)][iy + (2)][iz + (254)] =
            Facet_0_0_1_src_2_1_0_dest_2_1_1_Recv.
            Ridge_0_0_1_Om_82_r_2_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (30)][iz + (0)] =
            Facet_0_1_0_src_1_0_0_dest_2_1_1_Recv.
            Ridge_0_1_0_Om_82_r_1_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (2)][iy + (30)][iz + (0)] =
            Facet_0_1_0_src_2_0_0_dest_2_1_1_Recv.
            Ridge_0_1_0_Om_82_r_2_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (0)][iy + (30)][iz + (2)] =
            Facet_0_1_0_src_1_0_1_dest_2_1_1_Recv.
            Ridge_0_1_0_Om_82_r_1_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (2)][iy + (30)][iz + (2)] =
            Facet_0_1_0_src_2_0_1_dest_2_1_1_Recv.
            Ridge_0_1_0_Om_82_r_2_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (30)][iz + (254)] =
            Facet_0_1_1_src_1_0_0_dest_2_1_1_Recv.
            Ridge_0_1_1_Om_82_r_1_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (2)][iy + (30)][iz + (254)] =
            Facet_0_1_1_src_2_0_0_dest_2_1_1_Recv.
            Ridge_0_1_1_Om_82_r_2_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (20)][iy + (0)][iz + (0)] =
            Facet_1_0_0_src_0_0_0_dest_2_1_1_Recv.
            Ridge_1_0_0_Om_82_r_0_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (20)][iy + (2)][iz + (0)] =
            Facet_1_0_0_src_0_1_0_dest_2_1_1_Recv.
            Ridge_1_0_0_Om_82_r_0_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (20)][iy + (0)][iz + (2)] =
            Facet_1_0_0_src_0_0_1_dest_2_1_1_Recv.
            Ridge_1_0_0_Om_82_r_0_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (20)][iy + (2)][iz + (2)] =
            Facet_1_0_0_src_0_1_1_dest_2_1_1_Recv.
            Ridge_1_0_0_Om_82_r_0_1_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (20)][iy + (0)][iz + (254)] =
            Facet_1_0_1_src_0_0_0_dest_2_1_1_Recv.
            Ridge_1_0_1_Om_82_r_0_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (20)][iy + (2)][iz + (254)] =
            Facet_1_0_1_src_0_1_0_dest_2_1_1_Recv.
            Ridge_1_0_1_Om_82_r_0_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (20)][iy + (30)][iz + (0)] =
            Facet_1_1_0_src_0_0_0_dest_2_1_1_Recv.
            Ridge_1_1_0_Om_82_r_0_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (20)][iy + (30)][iz + (2)] =
            Facet_1_1_0_src_0_0_1_dest_2_1_1_Recv.
            Ridge_1_1_0_Om_82_r_0_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (20)][iy + (30)][iz + (254)] =
            Facet_1_1_1_src_0_0_0_dest_2_1_1_Recv.
            Ridge_1_1_1_Om_82_r_0_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (2, 22, 2, 32, 2, 256, Rsc3, -1, -1, -1, Rsc2, -1, -1,
      -1, Rsc3, 0, -1, -1, Rsc3, -2, -1, -1, Rsc3, -1, 0, -1, Rsc3, -1, -2, -1,
      Rsc3, -1, -1, 0, Rsc3, -1, -1, -2, Rsc1);

  }
}

void
Formura_internal_188 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (2, 22, 2, 32, 2, 256, Rsc2, -1, -1, -1, Rsc3, -1, -1,
      -1, Rsc2, 0, -1, -1, Rsc2, -2, -1, -1, Rsc2, -1, 0, -1, Rsc2, -1, -2, -1,
      Rsc2, -1, -1, 0, Rsc2, -1, -1, -2, Rsc0);

  }
}

void
Formura_internal_189 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_83_r_1_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_83_r_2_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_83_r_1_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_83_r_2_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_83_r_1_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (2)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_83_r_2_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (0)][iy + (2)][iz + (2)] =
            Ridge_0_0_0_Om_83_r_1_1_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (256)] =
            Facet_0_0_1_src_1_0_0_dest_2_1_1_Recv.
            Ridge_0_0_1_Om_83_r_1_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (0)][iz + (256)] =
            Facet_0_0_1_src_2_0_0_dest_2_1_1_Recv.
            Ridge_0_0_1_Om_83_r_2_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (2)][iz + (256)] =
            Facet_0_0_1_src_1_1_0_dest_2_1_1_Recv.
            Ridge_0_0_1_Om_83_r_1_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (2)][iz + (256)] =
            Facet_0_0_1_src_2_1_0_dest_2_1_1_Recv.
            Ridge_0_0_1_Om_83_r_2_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (32)][iz + (0)] =
            Facet_0_1_0_src_1_0_0_dest_2_1_1_Recv.
            Ridge_0_1_0_Om_83_r_1_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (32)][iz + (0)] =
            Facet_0_1_0_src_2_0_0_dest_2_1_1_Recv.
            Ridge_0_1_0_Om_83_r_2_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (0)][iy + (32)][iz + (2)] =
            Facet_0_1_0_src_1_0_1_dest_2_1_1_Recv.
            Ridge_0_1_0_Om_83_r_1_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (2)][iy + (32)][iz + (2)] =
            Facet_0_1_0_src_2_0_1_dest_2_1_1_Recv.
            Ridge_0_1_0_Om_83_r_2_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (32)][iz + (256)] =
            Facet_0_1_1_src_1_0_0_dest_2_1_1_Recv.
            Ridge_0_1_1_Om_83_r_1_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (32)][iz + (256)] =
            Facet_0_1_1_src_2_0_0_dest_2_1_1_Recv.
            Ridge_0_1_1_Om_83_r_2_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (22)][iy + (0)][iz + (0)] =
            Facet_1_0_0_src_0_0_0_dest_2_1_1_Recv.
            Ridge_1_0_0_Om_83_r_0_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (22)][iy + (2)][iz + (0)] =
            Facet_1_0_0_src_0_1_0_dest_2_1_1_Recv.
            Ridge_1_0_0_Om_83_r_0_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (22)][iy + (0)][iz + (2)] =
            Facet_1_0_0_src_0_0_1_dest_2_1_1_Recv.
            Ridge_1_0_0_Om_83_r_0_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (22)][iy + (2)][iz + (2)] =
            Facet_1_0_0_src_0_1_1_dest_2_1_1_Recv.
            Ridge_1_0_0_Om_83_r_0_1_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (22)][iy + (0)][iz + (256)] =
            Facet_1_0_1_src_0_0_0_dest_2_1_1_Recv.
            Ridge_1_0_1_Om_83_r_0_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (22)][iy + (2)][iz + (256)] =
            Facet_1_0_1_src_0_1_0_dest_2_1_1_Recv.
            Ridge_1_0_1_Om_83_r_0_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (22)][iy + (32)][iz + (0)] =
            Facet_1_1_0_src_0_0_0_dest_2_1_1_Recv.
            Ridge_1_1_0_Om_83_r_0_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (22)][iy + (32)][iz + (2)] =
            Facet_1_1_0_src_0_0_1_dest_2_1_1_Recv.
            Ridge_1_1_0_Om_83_r_0_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (22)][iy + (32)][iz + (256)] =
            Facet_1_1_1_src_0_0_0_dest_2_1_1_Recv.
            Ridge_1_1_1_Om_83_r_0_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_84_r_1_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_84_r_2_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_84_r_1_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_84_r_2_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_84_r_1_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (2)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_84_r_2_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (0)][iy + (2)][iz + (2)] =
            Ridge_0_0_0_Om_84_r_1_1_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (256)] =
            Facet_0_0_1_src_1_0_0_dest_2_1_1_Recv.
            Ridge_0_0_1_Om_84_r_1_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (0)][iz + (256)] =
            Facet_0_0_1_src_2_0_0_dest_2_1_1_Recv.
            Ridge_0_0_1_Om_84_r_2_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (2)][iz + (256)] =
            Facet_0_0_1_src_1_1_0_dest_2_1_1_Recv.
            Ridge_0_0_1_Om_84_r_1_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (2)][iz + (256)] =
            Facet_0_0_1_src_2_1_0_dest_2_1_1_Recv.
            Ridge_0_0_1_Om_84_r_2_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (32)][iz + (0)] =
            Facet_0_1_0_src_1_0_0_dest_2_1_1_Recv.
            Ridge_0_1_0_Om_84_r_1_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (32)][iz + (0)] =
            Facet_0_1_0_src_2_0_0_dest_2_1_1_Recv.
            Ridge_0_1_0_Om_84_r_2_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (0)][iy + (32)][iz + (2)] =
            Facet_0_1_0_src_1_0_1_dest_2_1_1_Recv.
            Ridge_0_1_0_Om_84_r_1_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (2)][iy + (32)][iz + (2)] =
            Facet_0_1_0_src_2_0_1_dest_2_1_1_Recv.
            Ridge_0_1_0_Om_84_r_2_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (32)][iz + (256)] =
            Facet_0_1_1_src_1_0_0_dest_2_1_1_Recv.
            Ridge_0_1_1_Om_84_r_1_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (32)][iz + (256)] =
            Facet_0_1_1_src_2_0_0_dest_2_1_1_Recv.
            Ridge_0_1_1_Om_84_r_2_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (22)][iy + (0)][iz + (0)] =
            Facet_1_0_0_src_0_0_0_dest_2_1_1_Recv.
            Ridge_1_0_0_Om_84_r_0_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (22)][iy + (2)][iz + (0)] =
            Facet_1_0_0_src_0_1_0_dest_2_1_1_Recv.
            Ridge_1_0_0_Om_84_r_0_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (22)][iy + (0)][iz + (2)] =
            Facet_1_0_0_src_0_0_1_dest_2_1_1_Recv.
            Ridge_1_0_0_Om_84_r_0_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (22)][iy + (2)][iz + (2)] =
            Facet_1_0_0_src_0_1_1_dest_2_1_1_Recv.
            Ridge_1_0_0_Om_84_r_0_1_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (22)][iy + (0)][iz + (256)] =
            Facet_1_0_1_src_0_0_0_dest_2_1_1_Recv.
            Ridge_1_0_1_Om_84_r_0_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (22)][iy + (2)][iz + (256)] =
            Facet_1_0_1_src_0_1_0_dest_2_1_1_Recv.
            Ridge_1_0_1_Om_84_r_0_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (22)][iy + (32)][iz + (0)] =
            Facet_1_1_0_src_0_0_0_dest_2_1_1_Recv.
            Ridge_1_1_0_Om_84_r_0_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (22)][iy + (32)][iz + (2)] =
            Facet_1_1_0_src_0_0_1_dest_2_1_1_Recv.
            Ridge_1_1_0_Om_84_r_0_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (22)][iy + (32)][iz + (256)] =
            Facet_1_1_1_src_0_0_0_dest_2_1_1_Recv.
            Ridge_1_1_1_Om_84_r_0_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (2, 24, 2, 34, 2, 258, Rsc1, -1, -1, -1, Rsc0, -1, -1,
      -1, Rsc1, 0, -1, -1, Rsc1, -2, -1, -1, Rsc1, -1, 0, -1, Rsc1, -1, -2, -1,
      Rsc1, -1, -1, 0, Rsc1, -1, -1, -2, Rsc2);

  }
}

void
Formura_internal_19 ()
{
#pragma omp parallel
  {
    Formura_subroutine_2 (0, 15, 0, 26, 0, 250, Rsc2, 1, 1, 1, Rsc3, 1, 1, 1,
      Rsc2, 2, 1, 1, Rsc2, 0, 1, 1, Rsc2, 1, 2, 1, Rsc2, 1, 0, 1, Rsc2, 1, 1, 2,
      Rsc2, 1, 1, 0, Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Ridge_0_0_0_Om_91_r_0_0_0_r_1_0_0[ix][iy][iz] =
            Rsc1[ix + (13)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 15; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Ridge_0_0_0_Om_91_r_0_0_0_r_0_1_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (24)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Ridge_0_0_0_Om_91_r_0_0_0_r_1_1_0[ix][iy][iz] =
            Rsc1[ix + (13)][iy + (24)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 15; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_91_r_0_0_0_r_0_0_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_91_r_0_0_0_r_1_0_1[ix][iy][iz] =
            Rsc1[ix + (13)][iy + (0)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 15; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_91_r_0_0_0_r_0_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (24)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_91_r_0_0_0_r_1_1_1[ix][iy][iz] =
            Rsc1[ix + (13)][iy + (24)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 15; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_0_0_dest_0_0_1_Send.
            Ridge_0_0_1_Om_91_r_0_0_0_r_0_0_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_0_0_dest_1_0_1_Send.
            Ridge_0_0_1_Om_91_r_0_0_0_r_1_0_1[ix][iy][iz] =
            Rsc1[ix + (13)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 15; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_0_0_dest_0_1_1_Send.
            Ridge_0_0_1_Om_91_r_0_0_0_r_0_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (24)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_0_0_dest_1_1_1_Send.
            Ridge_0_0_1_Om_91_r_0_0_0_r_1_1_1[ix][iy][iz] =
            Rsc1[ix + (13)][iy + (24)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 15; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Facet_0_1_0_src_0_0_0_dest_0_1_0_Send.
            Ridge_0_1_0_Om_91_r_0_0_0_r_0_1_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Facet_0_1_0_src_0_0_0_dest_1_1_0_Send.
            Ridge_0_1_0_Om_91_r_0_0_0_r_1_1_0[ix][iy][iz] =
            Rsc1[ix + (13)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 15; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_0_src_0_0_0_dest_0_1_1_Send.
            Ridge_0_1_0_Om_91_r_0_0_0_r_0_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_0_src_0_0_0_dest_1_1_1_Send.
            Ridge_0_1_0_Om_91_r_0_0_0_r_1_1_1[ix][iy][iz] =
            Rsc1[ix + (13)][iy + (0)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 15; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_1_src_0_0_0_dest_0_1_1_Send.
            Ridge_0_1_1_Om_91_r_0_0_0_r_0_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_1_src_0_0_0_dest_1_1_1_Send.
            Ridge_0_1_1_Om_91_r_0_0_0_r_1_1_1[ix][iy][iz] =
            Rsc1[ix + (13)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Facet_1_0_0_src_0_0_0_dest_2_0_0_Send.
            Ridge_1_0_0_Om_91_r_0_0_0_r_2_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Facet_1_0_0_src_0_0_0_dest_2_1_0_Send.
            Ridge_1_0_0_Om_91_r_0_0_0_r_2_1_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (24)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_0_src_0_0_0_dest_2_0_1_Send.
            Ridge_1_0_0_Om_91_r_0_0_0_r_2_0_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_0_src_0_0_0_dest_2_1_1_Send.
            Ridge_1_0_0_Om_91_r_0_0_0_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (24)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_1_src_0_0_0_dest_2_0_1_Send.
            Ridge_1_0_1_Om_91_r_0_0_0_r_2_0_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_1_src_0_0_0_dest_2_1_1_Send.
            Ridge_1_0_1_Om_91_r_0_0_0_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (24)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Facet_1_1_0_src_0_0_0_dest_2_1_0_Send.
            Ridge_1_1_0_Om_91_r_0_0_0_r_2_1_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_1_0_src_0_0_0_dest_2_1_1_Send.
            Ridge_1_1_0_Om_91_r_0_0_0_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_1_1_src_0_0_0_dest_2_1_1_Send.
            Ridge_1_1_1_Om_91_r_0_0_0_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_190 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (2, 24, 2, 34, 2, 258, Rsc0, -1, -1, -1, Rsc1, -1, -1,
      -1, Rsc0, 0, -1, -1, Rsc0, -2, -1, -1, Rsc0, -1, 0, -1, Rsc0, -1, -2, -1,
      Rsc0, -1, -1, 0, Rsc0, -1, -1, -2, Rsc3);

  }
}

void
Formura_internal_191 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_85_r_1_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_85_r_2_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_85_r_1_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (2)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_85_r_2_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_85_r_1_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc2[ix + (2)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_85_r_2_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc2[ix + (0)][iy + (2)][iz + (2)] =
            Ridge_0_0_0_Om_85_r_1_1_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (258)] =
            Facet_0_0_1_src_1_0_0_dest_2_1_1_Recv.
            Ridge_0_0_1_Om_85_r_1_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (2)][iy + (0)][iz + (258)] =
            Facet_0_0_1_src_2_0_0_dest_2_1_1_Recv.
            Ridge_0_0_1_Om_85_r_2_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (2)][iz + (258)] =
            Facet_0_0_1_src_1_1_0_dest_2_1_1_Recv.
            Ridge_0_0_1_Om_85_r_1_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (2)][iy + (2)][iz + (258)] =
            Facet_0_0_1_src_2_1_0_dest_2_1_1_Recv.
            Ridge_0_0_1_Om_85_r_2_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (34)][iz + (0)] =
            Facet_0_1_0_src_1_0_0_dest_2_1_1_Recv.
            Ridge_0_1_0_Om_85_r_1_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (2)][iy + (34)][iz + (0)] =
            Facet_0_1_0_src_2_0_0_dest_2_1_1_Recv.
            Ridge_0_1_0_Om_85_r_2_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc2[ix + (0)][iy + (34)][iz + (2)] =
            Facet_0_1_0_src_1_0_1_dest_2_1_1_Recv.
            Ridge_0_1_0_Om_85_r_1_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc2[ix + (2)][iy + (34)][iz + (2)] =
            Facet_0_1_0_src_2_0_1_dest_2_1_1_Recv.
            Ridge_0_1_0_Om_85_r_2_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (34)][iz + (258)] =
            Facet_0_1_1_src_1_0_0_dest_2_1_1_Recv.
            Ridge_0_1_1_Om_85_r_1_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (2)][iy + (34)][iz + (258)] =
            Facet_0_1_1_src_2_0_0_dest_2_1_1_Recv.
            Ridge_0_1_1_Om_85_r_2_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (24)][iy + (0)][iz + (0)] =
            Facet_1_0_0_src_0_0_0_dest_2_1_1_Recv.
            Ridge_1_0_0_Om_85_r_0_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (24)][iy + (2)][iz + (0)] =
            Facet_1_0_0_src_0_1_0_dest_2_1_1_Recv.
            Ridge_1_0_0_Om_85_r_0_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc2[ix + (24)][iy + (0)][iz + (2)] =
            Facet_1_0_0_src_0_0_1_dest_2_1_1_Recv.
            Ridge_1_0_0_Om_85_r_0_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc2[ix + (24)][iy + (2)][iz + (2)] =
            Facet_1_0_0_src_0_1_1_dest_2_1_1_Recv.
            Ridge_1_0_0_Om_85_r_0_1_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (24)][iy + (0)][iz + (258)] =
            Facet_1_0_1_src_0_0_0_dest_2_1_1_Recv.
            Ridge_1_0_1_Om_85_r_0_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (24)][iy + (2)][iz + (258)] =
            Facet_1_0_1_src_0_1_0_dest_2_1_1_Recv.
            Ridge_1_0_1_Om_85_r_0_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (24)][iy + (34)][iz + (0)] =
            Facet_1_1_0_src_0_0_0_dest_2_1_1_Recv.
            Ridge_1_1_0_Om_85_r_0_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc2[ix + (24)][iy + (34)][iz + (2)] =
            Facet_1_1_0_src_0_0_1_dest_2_1_1_Recv.
            Ridge_1_1_0_Om_85_r_0_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (24)][iy + (34)][iz + (258)] =
            Facet_1_1_1_src_0_0_0_dest_2_1_1_Recv.
            Ridge_1_1_1_Om_85_r_0_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_86_r_1_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_86_r_2_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_86_r_1_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (2)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_86_r_2_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_86_r_1_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc3[ix + (2)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_86_r_2_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc3[ix + (0)][iy + (2)][iz + (2)] =
            Ridge_0_0_0_Om_86_r_1_1_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (258)] =
            Facet_0_0_1_src_1_0_0_dest_2_1_1_Recv.
            Ridge_0_0_1_Om_86_r_1_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (2)][iy + (0)][iz + (258)] =
            Facet_0_0_1_src_2_0_0_dest_2_1_1_Recv.
            Ridge_0_0_1_Om_86_r_2_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (2)][iz + (258)] =
            Facet_0_0_1_src_1_1_0_dest_2_1_1_Recv.
            Ridge_0_0_1_Om_86_r_1_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (2)][iy + (2)][iz + (258)] =
            Facet_0_0_1_src_2_1_0_dest_2_1_1_Recv.
            Ridge_0_0_1_Om_86_r_2_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (34)][iz + (0)] =
            Facet_0_1_0_src_1_0_0_dest_2_1_1_Recv.
            Ridge_0_1_0_Om_86_r_1_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (2)][iy + (34)][iz + (0)] =
            Facet_0_1_0_src_2_0_0_dest_2_1_1_Recv.
            Ridge_0_1_0_Om_86_r_2_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc3[ix + (0)][iy + (34)][iz + (2)] =
            Facet_0_1_0_src_1_0_1_dest_2_1_1_Recv.
            Ridge_0_1_0_Om_86_r_1_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc3[ix + (2)][iy + (34)][iz + (2)] =
            Facet_0_1_0_src_2_0_1_dest_2_1_1_Recv.
            Ridge_0_1_0_Om_86_r_2_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (34)][iz + (258)] =
            Facet_0_1_1_src_1_0_0_dest_2_1_1_Recv.
            Ridge_0_1_1_Om_86_r_1_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (2)][iy + (34)][iz + (258)] =
            Facet_0_1_1_src_2_0_0_dest_2_1_1_Recv.
            Ridge_0_1_1_Om_86_r_2_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (24)][iy + (0)][iz + (0)] =
            Facet_1_0_0_src_0_0_0_dest_2_1_1_Recv.
            Ridge_1_0_0_Om_86_r_0_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (24)][iy + (2)][iz + (0)] =
            Facet_1_0_0_src_0_1_0_dest_2_1_1_Recv.
            Ridge_1_0_0_Om_86_r_0_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc3[ix + (24)][iy + (0)][iz + (2)] =
            Facet_1_0_0_src_0_0_1_dest_2_1_1_Recv.
            Ridge_1_0_0_Om_86_r_0_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc3[ix + (24)][iy + (2)][iz + (2)] =
            Facet_1_0_0_src_0_1_1_dest_2_1_1_Recv.
            Ridge_1_0_0_Om_86_r_0_1_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (24)][iy + (0)][iz + (258)] =
            Facet_1_0_1_src_0_0_0_dest_2_1_1_Recv.
            Ridge_1_0_1_Om_86_r_0_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (24)][iy + (2)][iz + (258)] =
            Facet_1_0_1_src_0_1_0_dest_2_1_1_Recv.
            Ridge_1_0_1_Om_86_r_0_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (24)][iy + (34)][iz + (0)] =
            Facet_1_1_0_src_0_0_0_dest_2_1_1_Recv.
            Ridge_1_1_0_Om_86_r_0_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc3[ix + (24)][iy + (34)][iz + (2)] =
            Facet_1_1_0_src_0_0_1_dest_2_1_1_Recv.
            Ridge_1_1_0_Om_86_r_0_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (24)][iy + (34)][iz + (258)] =
            Facet_1_1_1_src_0_0_0_dest_2_1_1_Recv.
            Ridge_1_1_1_Om_86_r_0_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (2, 26, 2, 36, 2, 260, Rsc2, -1, -1, -1, Rsc3, -1, -1,
      -1, Rsc2, 0, -1, -1, Rsc2, -2, -1, -1, Rsc2, -1, 0, -1, Rsc2, -1, -2, -1,
      Rsc2, -1, -1, 0, Rsc2, -1, -1, -2, Rsc0);

  }
}

void
Formura_internal_192 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (2, 26, 2, 36, 2, 260, Rsc3, -1, -1, -1, Rsc2, -1, -1,
      -1, Rsc3, 0, -1, -1, Rsc3, -2, -1, -1, Rsc3, -1, 0, -1, Rsc3, -1, -2, -1,
      Rsc3, -1, -1, 0, Rsc3, -1, -1, -2, Rsc1);

  }
}

void
Formura_internal_193 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_87_r_1_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_87_r_2_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_87_r_1_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_87_r_2_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_87_r_1_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc0[ix + (2)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_87_r_2_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc0[ix + (0)][iy + (2)][iz + (2)] =
            Ridge_0_0_0_Om_87_r_1_1_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (260)] =
            Facet_0_0_1_src_1_0_0_dest_2_1_1_Recv.
            Ridge_0_0_1_Om_87_r_1_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (0)][iz + (260)] =
            Facet_0_0_1_src_2_0_0_dest_2_1_1_Recv.
            Ridge_0_0_1_Om_87_r_2_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (2)][iz + (260)] =
            Facet_0_0_1_src_1_1_0_dest_2_1_1_Recv.
            Ridge_0_0_1_Om_87_r_1_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (2)][iz + (260)] =
            Facet_0_0_1_src_2_1_0_dest_2_1_1_Recv.
            Ridge_0_0_1_Om_87_r_2_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (36)][iz + (0)] =
            Facet_0_1_0_src_1_0_0_dest_2_1_1_Recv.
            Ridge_0_1_0_Om_87_r_1_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (36)][iz + (0)] =
            Facet_0_1_0_src_2_0_0_dest_2_1_1_Recv.
            Ridge_0_1_0_Om_87_r_2_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc0[ix + (0)][iy + (36)][iz + (2)] =
            Facet_0_1_0_src_1_0_1_dest_2_1_1_Recv.
            Ridge_0_1_0_Om_87_r_1_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc0[ix + (2)][iy + (36)][iz + (2)] =
            Facet_0_1_0_src_2_0_1_dest_2_1_1_Recv.
            Ridge_0_1_0_Om_87_r_2_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (36)][iz + (260)] =
            Facet_0_1_1_src_1_0_0_dest_2_1_1_Recv.
            Ridge_0_1_1_Om_87_r_1_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (36)][iz + (260)] =
            Facet_0_1_1_src_2_0_0_dest_2_1_1_Recv.
            Ridge_0_1_1_Om_87_r_2_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (26)][iy + (0)][iz + (0)] =
            Facet_1_0_0_src_0_0_0_dest_2_1_1_Recv.
            Ridge_1_0_0_Om_87_r_0_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (26)][iy + (2)][iz + (0)] =
            Facet_1_0_0_src_0_1_0_dest_2_1_1_Recv.
            Ridge_1_0_0_Om_87_r_0_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc0[ix + (26)][iy + (0)][iz + (2)] =
            Facet_1_0_0_src_0_0_1_dest_2_1_1_Recv.
            Ridge_1_0_0_Om_87_r_0_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc0[ix + (26)][iy + (2)][iz + (2)] =
            Facet_1_0_0_src_0_1_1_dest_2_1_1_Recv.
            Ridge_1_0_0_Om_87_r_0_1_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (26)][iy + (0)][iz + (260)] =
            Facet_1_0_1_src_0_0_0_dest_2_1_1_Recv.
            Ridge_1_0_1_Om_87_r_0_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (26)][iy + (2)][iz + (260)] =
            Facet_1_0_1_src_0_1_0_dest_2_1_1_Recv.
            Ridge_1_0_1_Om_87_r_0_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (26)][iy + (36)][iz + (0)] =
            Facet_1_1_0_src_0_0_0_dest_2_1_1_Recv.
            Ridge_1_1_0_Om_87_r_0_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc0[ix + (26)][iy + (36)][iz + (2)] =
            Facet_1_1_0_src_0_0_1_dest_2_1_1_Recv.
            Ridge_1_1_0_Om_87_r_0_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (26)][iy + (36)][iz + (260)] =
            Facet_1_1_1_src_0_0_0_dest_2_1_1_Recv.
            Ridge_1_1_1_Om_87_r_0_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_88_r_1_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_88_r_2_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_88_r_1_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_88_r_2_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_88_r_1_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc1[ix + (2)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_88_r_2_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc1[ix + (0)][iy + (2)][iz + (2)] =
            Ridge_0_0_0_Om_88_r_1_1_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (260)] =
            Facet_0_0_1_src_1_0_0_dest_2_1_1_Recv.
            Ridge_0_0_1_Om_88_r_1_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (0)][iz + (260)] =
            Facet_0_0_1_src_2_0_0_dest_2_1_1_Recv.
            Ridge_0_0_1_Om_88_r_2_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (2)][iz + (260)] =
            Facet_0_0_1_src_1_1_0_dest_2_1_1_Recv.
            Ridge_0_0_1_Om_88_r_1_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (2)][iz + (260)] =
            Facet_0_0_1_src_2_1_0_dest_2_1_1_Recv.
            Ridge_0_0_1_Om_88_r_2_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (36)][iz + (0)] =
            Facet_0_1_0_src_1_0_0_dest_2_1_1_Recv.
            Ridge_0_1_0_Om_88_r_1_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (36)][iz + (0)] =
            Facet_0_1_0_src_2_0_0_dest_2_1_1_Recv.
            Ridge_0_1_0_Om_88_r_2_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc1[ix + (0)][iy + (36)][iz + (2)] =
            Facet_0_1_0_src_1_0_1_dest_2_1_1_Recv.
            Ridge_0_1_0_Om_88_r_1_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc1[ix + (2)][iy + (36)][iz + (2)] =
            Facet_0_1_0_src_2_0_1_dest_2_1_1_Recv.
            Ridge_0_1_0_Om_88_r_2_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (36)][iz + (260)] =
            Facet_0_1_1_src_1_0_0_dest_2_1_1_Recv.
            Ridge_0_1_1_Om_88_r_1_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (36)][iz + (260)] =
            Facet_0_1_1_src_2_0_0_dest_2_1_1_Recv.
            Ridge_0_1_1_Om_88_r_2_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (26)][iy + (0)][iz + (0)] =
            Facet_1_0_0_src_0_0_0_dest_2_1_1_Recv.
            Ridge_1_0_0_Om_88_r_0_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (26)][iy + (2)][iz + (0)] =
            Facet_1_0_0_src_0_1_0_dest_2_1_1_Recv.
            Ridge_1_0_0_Om_88_r_0_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc1[ix + (26)][iy + (0)][iz + (2)] =
            Facet_1_0_0_src_0_0_1_dest_2_1_1_Recv.
            Ridge_1_0_0_Om_88_r_0_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc1[ix + (26)][iy + (2)][iz + (2)] =
            Facet_1_0_0_src_0_1_1_dest_2_1_1_Recv.
            Ridge_1_0_0_Om_88_r_0_1_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (26)][iy + (0)][iz + (260)] =
            Facet_1_0_1_src_0_0_0_dest_2_1_1_Recv.
            Ridge_1_0_1_Om_88_r_0_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (26)][iy + (2)][iz + (260)] =
            Facet_1_0_1_src_0_1_0_dest_2_1_1_Recv.
            Ridge_1_0_1_Om_88_r_0_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (26)][iy + (36)][iz + (0)] =
            Facet_1_1_0_src_0_0_0_dest_2_1_1_Recv.
            Ridge_1_1_0_Om_88_r_0_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc1[ix + (26)][iy + (36)][iz + (2)] =
            Facet_1_1_0_src_0_0_1_dest_2_1_1_Recv.
            Ridge_1_1_0_Om_88_r_0_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (26)][iy + (36)][iz + (260)] =
            Facet_1_1_1_src_0_0_0_dest_2_1_1_Recv.
            Ridge_1_1_1_Om_88_r_0_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (2, 28, 2, 38, 2, 262, Rsc0, -1, -1, -1, Rsc1, -1, -1,
      -1, Rsc0, 0, -1, -1, Rsc0, -2, -1, -1, Rsc0, -1, 0, -1, Rsc0, -1, -2, -1,
      Rsc0, -1, -1, 0, Rsc0, -1, -1, -2, Rsc3);

  }
}

void
Formura_internal_194 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (2, 28, 2, 38, 2, 262, Rsc1, -1, -1, -1, Rsc0, -1, -1,
      -1, Rsc1, 0, -1, -1, Rsc1, -2, -1, -1, Rsc1, -1, 0, -1, Rsc1, -1, -2, -1,
      Rsc1, -1, -1, 0, Rsc1, -1, -1, -2, Rsc2);

  }
}
