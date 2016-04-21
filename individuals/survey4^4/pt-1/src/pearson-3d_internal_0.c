
#include <mpi.h>
#include <math.h>
#include <stdbool.h>
#include "pearson-3d.h"

void
Formura_internal ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 66; ++ix) {
      for (int iy = 0; iy < 66; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_0_0_dest_0_0_1_Send.Ridge_0_0_1_St_U[ix][iy][iz] =
            U[ix + (2)][iy + (2)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 66; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 512; ++iz) {
          Facet_0_1_0_src_0_0_0_dest_0_1_0_Send.Ridge_0_1_0_St_U[ix][iy][iz] =
            U[ix + (2)][iy + (2)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 66; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_1_src_0_0_0_dest_0_1_1_Send.Ridge_0_1_1_St_U[ix][iy][iz] =
            U[ix + (2)][iy + (2)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 66; ++iy) {
        for (int iz = 0; iz < 512; ++iz) {
          Facet_1_0_0_src_0_0_0_dest_2_0_0_Send.Ridge_1_0_0_St_U[ix][iy][iz] =
            U[ix + (2)][iy + (2)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 66; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_1_src_0_0_0_dest_2_0_1_Send.Ridge_1_0_1_St_U[ix][iy][iz] =
            U[ix + (2)][iy + (2)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 512; ++iz) {
          Facet_1_1_0_src_0_0_0_dest_2_1_0_Send.Ridge_1_1_0_St_U[ix][iy][iz] =
            U[ix + (2)][iy + (2)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_1_1_src_0_0_0_dest_2_1_1_Send.Ridge_1_1_1_St_U[ix][iy][iz] =
            U[ix + (2)][iy + (2)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 66; ++ix) {
      for (int iy = 0; iy < 66; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_0_0_dest_0_0_1_Send.Ridge_0_0_1_St_V[ix][iy][iz] =
            V[ix + (2)][iy + (2)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 66; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 512; ++iz) {
          Facet_0_1_0_src_0_0_0_dest_0_1_0_Send.Ridge_0_1_0_St_V[ix][iy][iz] =
            V[ix + (2)][iy + (2)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 66; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_1_src_0_0_0_dest_0_1_1_Send.Ridge_0_1_1_St_V[ix][iy][iz] =
            V[ix + (2)][iy + (2)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 66; ++iy) {
        for (int iz = 0; iz < 512; ++iz) {
          Facet_1_0_0_src_0_0_0_dest_2_0_0_Send.Ridge_1_0_0_St_V[ix][iy][iz] =
            V[ix + (2)][iy + (2)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 66; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_1_src_0_0_0_dest_2_0_1_Send.Ridge_1_0_1_St_V[ix][iy][iz] =
            V[ix + (2)][iy + (2)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 512; ++iz) {
          Facet_1_1_0_src_0_0_0_dest_2_1_0_Send.Ridge_1_1_0_St_V[ix][iy][iz] =
            V[ix + (2)][iy + (2)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_1_1_src_0_0_0_dest_2_1_1_Send.Ridge_1_1_1_St_V[ix][iy][iz] =
            V[ix + (2)][iy + (2)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_10 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (0, 26, 0, 37, 0, 260, Rsc1, 1, 1, 1, Rsc0, 1, 1, 1,
      Rsc1, 2, 1, 1, Rsc1, 0, 1, 1, Rsc1, 1, 2, 1, Rsc1, 1, 0, 1, Rsc1, 1, 1, 2,
      Rsc1, 1, 1, 0, Rsc3);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Ridge_0_0_0_Om_82_r_0_0_0_r_1_0_0[ix][iy][iz] =
            Rsc3[ix + (24)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Ridge_0_0_0_Om_82_r_0_0_0_r_0_1_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (35)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Ridge_0_0_0_Om_82_r_0_0_0_r_1_1_0[ix][iy][iz] =
            Rsc3[ix + (24)][iy + (35)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_82_r_0_0_0_r_0_0_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (258)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_82_r_0_0_0_r_1_0_1[ix][iy][iz] =
            Rsc3[ix + (24)][iy + (0)][iz + (258)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_82_r_0_0_0_r_0_1_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (35)][iz + (258)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_82_r_0_0_0_r_1_1_1[ix][iy][iz] =
            Rsc3[ix + (24)][iy + (35)][iz + (258)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_0_0_dest_0_0_1_Send.
            Ridge_0_0_1_Om_82_r_0_0_0_r_0_0_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_0_0_dest_1_0_1_Send.
            Ridge_0_0_1_Om_82_r_0_0_0_r_1_0_1[ix][iy][iz] =
            Rsc3[ix + (24)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_0_0_dest_0_1_1_Send.
            Ridge_0_0_1_Om_82_r_0_0_0_r_0_1_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (35)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_0_0_dest_1_1_1_Send.
            Ridge_0_0_1_Om_82_r_0_0_0_r_1_1_1[ix][iy][iz] =
            Rsc3[ix + (24)][iy + (35)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Facet_0_1_0_src_0_0_0_dest_0_1_0_Send.
            Ridge_0_1_0_Om_82_r_0_0_0_r_0_1_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Facet_0_1_0_src_0_0_0_dest_1_1_0_Send.
            Ridge_0_1_0_Om_82_r_0_0_0_r_1_1_0[ix][iy][iz] =
            Rsc3[ix + (24)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_0_src_0_0_0_dest_0_1_1_Send.
            Ridge_0_1_0_Om_82_r_0_0_0_r_0_1_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (258)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_0_src_0_0_0_dest_1_1_1_Send.
            Ridge_0_1_0_Om_82_r_0_0_0_r_1_1_1[ix][iy][iz] =
            Rsc3[ix + (24)][iy + (0)][iz + (258)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_1_src_0_0_0_dest_0_1_1_Send.
            Ridge_0_1_1_Om_82_r_0_0_0_r_0_1_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_1_src_0_0_0_dest_1_1_1_Send.
            Ridge_0_1_1_Om_82_r_0_0_0_r_1_1_1[ix][iy][iz] =
            Rsc3[ix + (24)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Facet_1_0_0_src_0_0_0_dest_2_0_0_Send.
            Ridge_1_0_0_Om_82_r_0_0_0_r_2_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Facet_1_0_0_src_0_0_0_dest_2_1_0_Send.
            Ridge_1_0_0_Om_82_r_0_0_0_r_2_1_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (35)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_0_src_0_0_0_dest_2_0_1_Send.
            Ridge_1_0_0_Om_82_r_0_0_0_r_2_0_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (258)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_0_src_0_0_0_dest_2_1_1_Send.
            Ridge_1_0_0_Om_82_r_0_0_0_r_2_1_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (35)][iz + (258)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_1_src_0_0_0_dest_2_0_1_Send.
            Ridge_1_0_1_Om_82_r_0_0_0_r_2_0_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_1_src_0_0_0_dest_2_1_1_Send.
            Ridge_1_0_1_Om_82_r_0_0_0_r_2_1_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (35)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Facet_1_1_0_src_0_0_0_dest_2_1_0_Send.
            Ridge_1_1_0_Om_82_r_0_0_0_r_2_1_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_1_0_src_0_0_0_dest_2_1_1_Send.
            Ridge_1_1_0_Om_82_r_0_0_0_r_2_1_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (258)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_1_1_src_0_0_0_dest_2_1_1_Send.
            Ridge_1_1_1_Om_82_r_0_0_0_r_2_1_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_100 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (2, 30, 2, 41, 0, 250, Rsc2, -1, -1, 1, Rsc3, -1, -1,
      1, Rsc2, 0, -1, 1, Rsc2, -2, -1, 1, Rsc2, -1, 0, 1, Rsc2, -1, -2, 1, Rsc2,
      -1, -1, 2, Rsc2, -1, -1, 0, Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_92_r_2_1_0_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (2)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_2_1_0_dest_2_1_1_Send.
            Ridge_0_0_1_Om_92_r_2_1_0_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_101 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_91_r_1_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_91_r_2_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (0)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_91_r_1_1_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (0)][iy + (41)][iz + (0)] =
            Facet_0_1_0_src_1_0_0_dest_2_1_0_Recv.
            Ridge_0_1_0_Om_91_r_1_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (2)][iy + (41)][iz + (0)] =
            Facet_0_1_0_src_2_0_0_dest_2_1_0_Recv.
            Ridge_0_1_0_Om_91_r_2_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (30)][iy + (0)][iz + (0)] =
            Facet_1_0_0_src_0_0_0_dest_2_1_0_Recv.
            Ridge_1_0_0_Om_91_r_0_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (30)][iy + (2)][iz + (0)] =
            Facet_1_0_0_src_0_1_0_dest_2_1_0_Recv.
            Ridge_1_0_0_Om_91_r_0_1_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (30)][iy + (41)][iz + (0)] =
            Facet_1_1_0_src_0_0_0_dest_2_1_0_Recv.
            Ridge_1_1_0_Om_91_r_0_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_92_r_1_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_92_r_2_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (0)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_92_r_1_1_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (0)][iy + (41)][iz + (0)] =
            Facet_0_1_0_src_1_0_0_dest_2_1_0_Recv.
            Ridge_0_1_0_Om_92_r_1_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (2)][iy + (41)][iz + (0)] =
            Facet_0_1_0_src_2_0_0_dest_2_1_0_Recv.
            Ridge_0_1_0_Om_92_r_2_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (30)][iy + (0)][iz + (0)] =
            Facet_1_0_0_src_0_0_0_dest_2_1_0_Recv.
            Ridge_1_0_0_Om_92_r_0_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (30)][iy + (2)][iz + (0)] =
            Facet_1_0_0_src_0_1_0_dest_2_1_0_Recv.
            Ridge_1_0_0_Om_92_r_0_1_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (30)][iy + (41)][iz + (0)] =
            Facet_1_1_0_src_0_0_0_dest_2_1_0_Recv.
            Ridge_1_1_0_Om_92_r_0_0_0_r_2_1_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_3 (46, 76, 35, 76, 10, 258, Rsc1, -45, -34, -9, Rsc0,
      -45, -34, -9, Rsc1, -44, -34, -9, Rsc1, -46, -34, -9, Rsc1, -45, -33, -9,
      Rsc1, -45, -35, -9, Rsc1, -45, -34, -8, Rsc1, -45, -34, -10, -8, -8, -8);

  }
}

void
Formura_internal_102 ()
{
#pragma omp parallel
  {
    Formura_subroutine_1 (46, 76, 35, 76, 10, 258, Rsc0, -45, -34, -9, Rsc1,
      -45, -34, -9, Rsc0, -44, -34, -9, Rsc0, -46, -34, -9, Rsc0, -45, -33, -9,
      Rsc0, -45, -35, -9, Rsc0, -45, -34, -8, Rsc0, -45, -34, -10, -8, -8, -8);

  }
}

void
Formura_internal_103 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 66; ++ix) {
      for (int iy = 0; iy < 66; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          U[ix + (2)][iy + (2)][iz + (514)] =
            Facet_0_0_1_src_0_0_0_dest_0_0_1_Recv.Ridge_0_0_1_St_U[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 66; ++ix) {
      for (int iy = 0; iy < 66; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          V[ix + (2)][iy + (2)][iz + (514)] =
            Facet_0_0_1_src_0_0_0_dest_0_0_1_Recv.Ridge_0_0_1_St_V[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_4 (0, 28, 0, 39, 2, 252, 3, 3, 263, 3, 3, 263, 4, 3, 263,
      2, 3, 263, 3, 4, 263, 3, 2, 263, 3, 3, 264, 3, 3, 262, Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Ridge_0_0_0_Om_79_r_0_0_1_r_1_0_1[ix][iy][iz] =
            Rsc0[ix + (26)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Ridge_0_0_0_Om_79_r_0_0_1_r_0_1_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (37)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Ridge_0_0_0_Om_79_r_0_0_1_r_1_1_1[ix][iy][iz] =
            Rsc0[ix + (26)][iy + (37)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Facet_0_1_0_src_0_0_1_dest_0_1_1_Send.
            Ridge_0_1_0_Om_79_r_0_0_1_r_0_1_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Facet_0_1_0_src_0_0_1_dest_1_1_1_Send.
            Ridge_0_1_0_Om_79_r_0_0_1_r_1_1_1[ix][iy][iz] =
            Rsc0[ix + (26)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Facet_1_0_0_src_0_0_1_dest_2_0_1_Send.
            Ridge_1_0_0_Om_79_r_0_0_1_r_2_0_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Facet_1_0_0_src_0_0_1_dest_2_1_1_Send.
            Ridge_1_0_0_Om_79_r_0_0_1_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (37)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Facet_1_1_0_src_0_0_1_dest_2_1_1_Send.
            Ridge_1_1_0_Om_79_r_0_0_1_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_104 ()
{
#pragma omp parallel
  {
    Formura_subroutine_5 (0, 28, 0, 39, 2, 252, 3, 3, 263, 3, 3, 263, 4, 3, 263,
      2, 3, 263, 3, 4, 263, 3, 2, 263, 3, 3, 264, 3, 3, 262, Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Ridge_0_0_0_Om_80_r_0_0_1_r_1_0_1[ix][iy][iz] =
            Rsc1[ix + (26)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Ridge_0_0_0_Om_80_r_0_0_1_r_0_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (37)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Ridge_0_0_0_Om_80_r_0_0_1_r_1_1_1[ix][iy][iz] =
            Rsc1[ix + (26)][iy + (37)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Facet_0_1_0_src_0_0_1_dest_0_1_1_Send.
            Ridge_0_1_0_Om_80_r_0_0_1_r_0_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Facet_0_1_0_src_0_0_1_dest_1_1_1_Send.
            Ridge_0_1_0_Om_80_r_0_0_1_r_1_1_1[ix][iy][iz] =
            Rsc1[ix + (26)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Facet_1_0_0_src_0_0_1_dest_2_0_1_Send.
            Ridge_1_0_0_Om_80_r_0_0_1_r_2_0_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Facet_1_0_0_src_0_0_1_dest_2_1_1_Send.
            Ridge_1_0_0_Om_80_r_0_0_1_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (37)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Facet_1_1_0_src_0_0_1_dest_2_1_1_Send.
            Ridge_1_1_0_Om_80_r_0_0_1_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_105 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_79_r_0_0_0_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (252)] =
            Facet_0_0_1_src_0_0_0_dest_0_0_1_Recv.
            Ridge_0_0_1_Om_79_r_0_0_0_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_80_r_0_0_0_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (252)] =
            Facet_0_0_1_src_0_0_0_dest_0_0_1_Recv.
            Ridge_0_0_1_Om_80_r_0_0_0_r_0_0_1[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (0, 26, 0, 37, 2, 254, Rsc0, 1, 1, -1, Rsc1, 1, 1, -1,
      Rsc0, 2, 1, -1, Rsc0, 0, 1, -1, Rsc0, 1, 2, -1, Rsc0, 1, 0, -1, Rsc0, 1,
      1, 0, Rsc0, 1, 1, -2, Rsc2);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Ridge_0_0_0_Om_81_r_0_0_1_r_1_0_1[ix][iy][iz] =
            Rsc2[ix + (24)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Ridge_0_0_0_Om_81_r_0_0_1_r_0_1_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (35)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Ridge_0_0_0_Om_81_r_0_0_1_r_1_1_1[ix][iy][iz] =
            Rsc2[ix + (24)][iy + (35)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Facet_0_1_0_src_0_0_1_dest_0_1_1_Send.
            Ridge_0_1_0_Om_81_r_0_0_1_r_0_1_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Facet_0_1_0_src_0_0_1_dest_1_1_1_Send.
            Ridge_0_1_0_Om_81_r_0_0_1_r_1_1_1[ix][iy][iz] =
            Rsc2[ix + (24)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Facet_1_0_0_src_0_0_1_dest_2_0_1_Send.
            Ridge_1_0_0_Om_81_r_0_0_1_r_2_0_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Facet_1_0_0_src_0_0_1_dest_2_1_1_Send.
            Ridge_1_0_0_Om_81_r_0_0_1_r_2_1_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (35)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Facet_1_1_0_src_0_0_1_dest_2_1_1_Send.
            Ridge_1_1_0_Om_81_r_0_0_1_r_2_1_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_106 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (0, 26, 0, 37, 2, 254, Rsc1, 1, 1, -1, Rsc0, 1, 1, -1,
      Rsc1, 2, 1, -1, Rsc1, 0, 1, -1, Rsc1, 1, 2, -1, Rsc1, 1, 0, -1, Rsc1, 1,
      1, 0, Rsc1, 1, 1, -2, Rsc3);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Ridge_0_0_0_Om_82_r_0_0_1_r_1_0_1[ix][iy][iz] =
            Rsc3[ix + (24)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Ridge_0_0_0_Om_82_r_0_0_1_r_0_1_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (35)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Ridge_0_0_0_Om_82_r_0_0_1_r_1_1_1[ix][iy][iz] =
            Rsc3[ix + (24)][iy + (35)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Facet_0_1_0_src_0_0_1_dest_0_1_1_Send.
            Ridge_0_1_0_Om_82_r_0_0_1_r_0_1_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Facet_0_1_0_src_0_0_1_dest_1_1_1_Send.
            Ridge_0_1_0_Om_82_r_0_0_1_r_1_1_1[ix][iy][iz] =
            Rsc3[ix + (24)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Facet_1_0_0_src_0_0_1_dest_2_0_1_Send.
            Ridge_1_0_0_Om_82_r_0_0_1_r_2_0_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Facet_1_0_0_src_0_0_1_dest_2_1_1_Send.
            Ridge_1_0_0_Om_82_r_0_0_1_r_2_1_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (35)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Facet_1_1_0_src_0_0_1_dest_2_1_1_Send.
            Ridge_1_1_0_Om_82_r_0_0_1_r_2_1_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_107 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_81_r_0_0_0_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (254)] =
            Facet_0_0_1_src_0_0_0_dest_0_0_1_Recv.
            Ridge_0_0_1_Om_81_r_0_0_0_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_82_r_0_0_0_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 37; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (254)] =
            Facet_0_0_1_src_0_0_0_dest_0_0_1_Recv.
            Ridge_0_0_1_Om_82_r_0_0_0_r_0_0_1[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (0, 24, 0, 35, 2, 256, Rsc2, 1, 1, -1, Rsc3, 1, 1, -1,
      Rsc2, 2, 1, -1, Rsc2, 0, 1, -1, Rsc2, 1, 2, -1, Rsc2, 1, 0, -1, Rsc2, 1,
      1, 0, Rsc2, 1, 1, -2, Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Ridge_0_0_0_Om_83_r_0_0_1_r_1_0_1[ix][iy][iz] =
            Rsc1[ix + (22)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Ridge_0_0_0_Om_83_r_0_0_1_r_0_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (33)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Ridge_0_0_0_Om_83_r_0_0_1_r_1_1_1[ix][iy][iz] =
            Rsc1[ix + (22)][iy + (33)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Facet_0_1_0_src_0_0_1_dest_0_1_1_Send.
            Ridge_0_1_0_Om_83_r_0_0_1_r_0_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Facet_0_1_0_src_0_0_1_dest_1_1_1_Send.
            Ridge_0_1_0_Om_83_r_0_0_1_r_1_1_1[ix][iy][iz] =
            Rsc1[ix + (22)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Facet_1_0_0_src_0_0_1_dest_2_0_1_Send.
            Ridge_1_0_0_Om_83_r_0_0_1_r_2_0_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Facet_1_0_0_src_0_0_1_dest_2_1_1_Send.
            Ridge_1_0_0_Om_83_r_0_0_1_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (33)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Facet_1_1_0_src_0_0_1_dest_2_1_1_Send.
            Ridge_1_1_0_Om_83_r_0_0_1_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_108 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (0, 24, 0, 35, 2, 256, Rsc3, 1, 1, -1, Rsc2, 1, 1, -1,
      Rsc3, 2, 1, -1, Rsc3, 0, 1, -1, Rsc3, 1, 2, -1, Rsc3, 1, 0, -1, Rsc3, 1,
      1, 0, Rsc3, 1, 1, -2, Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Ridge_0_0_0_Om_84_r_0_0_1_r_1_0_1[ix][iy][iz] =
            Rsc0[ix + (22)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Ridge_0_0_0_Om_84_r_0_0_1_r_0_1_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (33)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Ridge_0_0_0_Om_84_r_0_0_1_r_1_1_1[ix][iy][iz] =
            Rsc0[ix + (22)][iy + (33)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Facet_0_1_0_src_0_0_1_dest_0_1_1_Send.
            Ridge_0_1_0_Om_84_r_0_0_1_r_0_1_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Facet_0_1_0_src_0_0_1_dest_1_1_1_Send.
            Ridge_0_1_0_Om_84_r_0_0_1_r_1_1_1[ix][iy][iz] =
            Rsc0[ix + (22)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Facet_1_0_0_src_0_0_1_dest_2_0_1_Send.
            Ridge_1_0_0_Om_84_r_0_0_1_r_2_0_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Facet_1_0_0_src_0_0_1_dest_2_1_1_Send.
            Ridge_1_0_0_Om_84_r_0_0_1_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (33)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Facet_1_1_0_src_0_0_1_dest_2_1_1_Send.
            Ridge_1_1_0_Om_84_r_0_0_1_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_109 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_83_r_0_0_0_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (256)] =
            Facet_0_0_1_src_0_0_0_dest_0_0_1_Recv.
            Ridge_0_0_1_Om_83_r_0_0_0_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_84_r_0_0_0_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (256)] =
            Facet_0_0_1_src_0_0_0_dest_0_0_1_Recv.
            Ridge_0_0_1_Om_84_r_0_0_0_r_0_0_1[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (0, 22, 0, 33, 2, 258, Rsc1, 1, 1, -1, Rsc0, 1, 1, -1,
      Rsc1, 2, 1, -1, Rsc1, 0, 1, -1, Rsc1, 1, 2, -1, Rsc1, 1, 0, -1, Rsc1, 1,
      1, 0, Rsc1, 1, 1, -2, Rsc3);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Ridge_0_0_0_Om_85_r_0_0_1_r_1_0_1[ix][iy][iz] =
            Rsc3[ix + (20)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Ridge_0_0_0_Om_85_r_0_0_1_r_0_1_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (31)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Ridge_0_0_0_Om_85_r_0_0_1_r_1_1_1[ix][iy][iz] =
            Rsc3[ix + (20)][iy + (31)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Facet_0_1_0_src_0_0_1_dest_0_1_1_Send.
            Ridge_0_1_0_Om_85_r_0_0_1_r_0_1_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Facet_0_1_0_src_0_0_1_dest_1_1_1_Send.
            Ridge_0_1_0_Om_85_r_0_0_1_r_1_1_1[ix][iy][iz] =
            Rsc3[ix + (20)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Facet_1_0_0_src_0_0_1_dest_2_0_1_Send.
            Ridge_1_0_0_Om_85_r_0_0_1_r_2_0_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Facet_1_0_0_src_0_0_1_dest_2_1_1_Send.
            Ridge_1_0_0_Om_85_r_0_0_1_r_2_1_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (31)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Facet_1_1_0_src_0_0_1_dest_2_1_1_Send.
            Ridge_1_1_0_Om_85_r_0_0_1_r_2_1_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_11 ()
{
#pragma omp parallel
  {
    Formura_subroutine_2 (0, 24, 0, 35, 0, 258, Rsc2, 1, 1, 1, Rsc3, 1, 1, 1,
      Rsc2, 2, 1, 1, Rsc2, 0, 1, 1, Rsc2, 1, 2, 1, Rsc2, 1, 0, 1, Rsc2, 1, 1, 2,
      Rsc2, 1, 1, 0, Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Ridge_0_0_0_Om_83_r_0_0_0_r_1_0_0[ix][iy][iz] =
            Rsc1[ix + (22)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Ridge_0_0_0_Om_83_r_0_0_0_r_0_1_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (33)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Ridge_0_0_0_Om_83_r_0_0_0_r_1_1_0[ix][iy][iz] =
            Rsc1[ix + (22)][iy + (33)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_83_r_0_0_0_r_0_0_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (256)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_83_r_0_0_0_r_1_0_1[ix][iy][iz] =
            Rsc1[ix + (22)][iy + (0)][iz + (256)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_83_r_0_0_0_r_0_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (33)][iz + (256)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_83_r_0_0_0_r_1_1_1[ix][iy][iz] =
            Rsc1[ix + (22)][iy + (33)][iz + (256)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_0_0_dest_0_0_1_Send.
            Ridge_0_0_1_Om_83_r_0_0_0_r_0_0_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_0_0_dest_1_0_1_Send.
            Ridge_0_0_1_Om_83_r_0_0_0_r_1_0_1[ix][iy][iz] =
            Rsc1[ix + (22)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_0_0_dest_0_1_1_Send.
            Ridge_0_0_1_Om_83_r_0_0_0_r_0_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (33)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_0_0_dest_1_1_1_Send.
            Ridge_0_0_1_Om_83_r_0_0_0_r_1_1_1[ix][iy][iz] =
            Rsc1[ix + (22)][iy + (33)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Facet_0_1_0_src_0_0_0_dest_0_1_0_Send.
            Ridge_0_1_0_Om_83_r_0_0_0_r_0_1_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Facet_0_1_0_src_0_0_0_dest_1_1_0_Send.
            Ridge_0_1_0_Om_83_r_0_0_0_r_1_1_0[ix][iy][iz] =
            Rsc1[ix + (22)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_0_src_0_0_0_dest_0_1_1_Send.
            Ridge_0_1_0_Om_83_r_0_0_0_r_0_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (256)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_0_src_0_0_0_dest_1_1_1_Send.
            Ridge_0_1_0_Om_83_r_0_0_0_r_1_1_1[ix][iy][iz] =
            Rsc1[ix + (22)][iy + (0)][iz + (256)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_1_src_0_0_0_dest_0_1_1_Send.
            Ridge_0_1_1_Om_83_r_0_0_0_r_0_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_1_src_0_0_0_dest_1_1_1_Send.
            Ridge_0_1_1_Om_83_r_0_0_0_r_1_1_1[ix][iy][iz] =
            Rsc1[ix + (22)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Facet_1_0_0_src_0_0_0_dest_2_0_0_Send.
            Ridge_1_0_0_Om_83_r_0_0_0_r_2_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Facet_1_0_0_src_0_0_0_dest_2_1_0_Send.
            Ridge_1_0_0_Om_83_r_0_0_0_r_2_1_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (33)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_0_src_0_0_0_dest_2_0_1_Send.
            Ridge_1_0_0_Om_83_r_0_0_0_r_2_0_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (256)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_0_src_0_0_0_dest_2_1_1_Send.
            Ridge_1_0_0_Om_83_r_0_0_0_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (33)][iz + (256)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 35; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_1_src_0_0_0_dest_2_0_1_Send.
            Ridge_1_0_1_Om_83_r_0_0_0_r_2_0_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_1_src_0_0_0_dest_2_1_1_Send.
            Ridge_1_0_1_Om_83_r_0_0_0_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (33)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Facet_1_1_0_src_0_0_0_dest_2_1_0_Send.
            Ridge_1_1_0_Om_83_r_0_0_0_r_2_1_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_1_0_src_0_0_0_dest_2_1_1_Send.
            Ridge_1_1_0_Om_83_r_0_0_0_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (256)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_1_1_src_0_0_0_dest_2_1_1_Send.
            Ridge_1_1_1_Om_83_r_0_0_0_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_110 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (0, 22, 0, 33, 2, 258, Rsc0, 1, 1, -1, Rsc1, 1, 1, -1,
      Rsc0, 2, 1, -1, Rsc0, 0, 1, -1, Rsc0, 1, 2, -1, Rsc0, 1, 0, -1, Rsc0, 1,
      1, 0, Rsc0, 1, 1, -2, Rsc2);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Ridge_0_0_0_Om_86_r_0_0_1_r_1_0_1[ix][iy][iz] =
            Rsc2[ix + (20)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Ridge_0_0_0_Om_86_r_0_0_1_r_0_1_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (31)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Ridge_0_0_0_Om_86_r_0_0_1_r_1_1_1[ix][iy][iz] =
            Rsc2[ix + (20)][iy + (31)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Facet_0_1_0_src_0_0_1_dest_0_1_1_Send.
            Ridge_0_1_0_Om_86_r_0_0_1_r_0_1_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Facet_0_1_0_src_0_0_1_dest_1_1_1_Send.
            Ridge_0_1_0_Om_86_r_0_0_1_r_1_1_1[ix][iy][iz] =
            Rsc2[ix + (20)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Facet_1_0_0_src_0_0_1_dest_2_0_1_Send.
            Ridge_1_0_0_Om_86_r_0_0_1_r_2_0_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Facet_1_0_0_src_0_0_1_dest_2_1_1_Send.
            Ridge_1_0_0_Om_86_r_0_0_1_r_2_1_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (31)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Facet_1_1_0_src_0_0_1_dest_2_1_1_Send.
            Ridge_1_1_0_Om_86_r_0_0_1_r_2_1_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_111 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_85_r_0_0_0_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (258)] =
            Facet_0_0_1_src_0_0_0_dest_0_0_1_Recv.
            Ridge_0_0_1_Om_85_r_0_0_0_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_86_r_0_0_0_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 33; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (258)] =
            Facet_0_0_1_src_0_0_0_dest_0_0_1_Recv.
            Ridge_0_0_1_Om_86_r_0_0_0_r_0_0_1[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (0, 20, 0, 31, 2, 260, Rsc3, 1, 1, -1, Rsc2, 1, 1, -1,
      Rsc3, 2, 1, -1, Rsc3, 0, 1, -1, Rsc3, 1, 2, -1, Rsc3, 1, 0, -1, Rsc3, 1,
      1, 0, Rsc3, 1, 1, -2, Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Ridge_0_0_0_Om_87_r_0_0_1_r_1_0_1[ix][iy][iz] =
            Rsc0[ix + (18)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Ridge_0_0_0_Om_87_r_0_0_1_r_0_1_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (29)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Ridge_0_0_0_Om_87_r_0_0_1_r_1_1_1[ix][iy][iz] =
            Rsc0[ix + (18)][iy + (29)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Facet_0_1_0_src_0_0_1_dest_0_1_1_Send.
            Ridge_0_1_0_Om_87_r_0_0_1_r_0_1_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Facet_0_1_0_src_0_0_1_dest_1_1_1_Send.
            Ridge_0_1_0_Om_87_r_0_0_1_r_1_1_1[ix][iy][iz] =
            Rsc0[ix + (18)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Facet_1_0_0_src_0_0_1_dest_2_0_1_Send.
            Ridge_1_0_0_Om_87_r_0_0_1_r_2_0_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Facet_1_0_0_src_0_0_1_dest_2_1_1_Send.
            Ridge_1_0_0_Om_87_r_0_0_1_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (29)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Facet_1_1_0_src_0_0_1_dest_2_1_1_Send.
            Ridge_1_1_0_Om_87_r_0_0_1_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_112 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (0, 20, 0, 31, 2, 260, Rsc2, 1, 1, -1, Rsc3, 1, 1, -1,
      Rsc2, 2, 1, -1, Rsc2, 0, 1, -1, Rsc2, 1, 2, -1, Rsc2, 1, 0, -1, Rsc2, 1,
      1, 0, Rsc2, 1, 1, -2, Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Ridge_0_0_0_Om_88_r_0_0_1_r_1_0_1[ix][iy][iz] =
            Rsc1[ix + (18)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Ridge_0_0_0_Om_88_r_0_0_1_r_0_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (29)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Ridge_0_0_0_Om_88_r_0_0_1_r_1_1_1[ix][iy][iz] =
            Rsc1[ix + (18)][iy + (29)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Facet_0_1_0_src_0_0_1_dest_0_1_1_Send.
            Ridge_0_1_0_Om_88_r_0_0_1_r_0_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Facet_0_1_0_src_0_0_1_dest_1_1_1_Send.
            Ridge_0_1_0_Om_88_r_0_0_1_r_1_1_1[ix][iy][iz] =
            Rsc1[ix + (18)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Facet_1_0_0_src_0_0_1_dest_2_0_1_Send.
            Ridge_1_0_0_Om_88_r_0_0_1_r_2_0_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Facet_1_0_0_src_0_0_1_dest_2_1_1_Send.
            Ridge_1_0_0_Om_88_r_0_0_1_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (29)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Facet_1_1_0_src_0_0_1_dest_2_1_1_Send.
            Ridge_1_1_0_Om_88_r_0_0_1_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_113 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_87_r_0_0_0_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (260)] =
            Facet_0_0_1_src_0_0_0_dest_0_0_1_Recv.
            Ridge_0_0_1_Om_87_r_0_0_0_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_88_r_0_0_0_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 31; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (260)] =
            Facet_0_0_1_src_0_0_0_dest_0_0_1_Recv.
            Ridge_0_0_1_Om_88_r_0_0_0_r_0_0_1[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (0, 18, 0, 29, 2, 262, Rsc0, 1, 1, -1, Rsc1, 1, 1, -1,
      Rsc0, 2, 1, -1, Rsc0, 0, 1, -1, Rsc0, 1, 2, -1, Rsc0, 1, 0, -1, Rsc0, 1,
      1, 0, Rsc0, 1, 1, -2, Rsc2);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Ridge_0_0_0_Om_89_r_0_0_1_r_1_0_1[ix][iy][iz] =
            Rsc2[ix + (16)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Ridge_0_0_0_Om_89_r_0_0_1_r_0_1_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (27)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Ridge_0_0_0_Om_89_r_0_0_1_r_1_1_1[ix][iy][iz] =
            Rsc2[ix + (16)][iy + (27)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Facet_0_1_0_src_0_0_1_dest_0_1_1_Send.
            Ridge_0_1_0_Om_89_r_0_0_1_r_0_1_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Facet_0_1_0_src_0_0_1_dest_1_1_1_Send.
            Ridge_0_1_0_Om_89_r_0_0_1_r_1_1_1[ix][iy][iz] =
            Rsc2[ix + (16)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Facet_1_0_0_src_0_0_1_dest_2_0_1_Send.
            Ridge_1_0_0_Om_89_r_0_0_1_r_2_0_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Facet_1_0_0_src_0_0_1_dest_2_1_1_Send.
            Ridge_1_0_0_Om_89_r_0_0_1_r_2_1_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (27)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Facet_1_1_0_src_0_0_1_dest_2_1_1_Send.
            Ridge_1_1_0_Om_89_r_0_0_1_r_2_1_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_114 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (0, 18, 0, 29, 2, 262, Rsc1, 1, 1, -1, Rsc0, 1, 1, -1,
      Rsc1, 2, 1, -1, Rsc1, 0, 1, -1, Rsc1, 1, 2, -1, Rsc1, 1, 0, -1, Rsc1, 1,
      1, 0, Rsc1, 1, 1, -2, Rsc3);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Ridge_0_0_0_Om_90_r_0_0_1_r_1_0_1[ix][iy][iz] =
            Rsc3[ix + (16)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Ridge_0_0_0_Om_90_r_0_0_1_r_0_1_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (27)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Ridge_0_0_0_Om_90_r_0_0_1_r_1_1_1[ix][iy][iz] =
            Rsc3[ix + (16)][iy + (27)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Facet_0_1_0_src_0_0_1_dest_0_1_1_Send.
            Ridge_0_1_0_Om_90_r_0_0_1_r_0_1_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Facet_0_1_0_src_0_0_1_dest_1_1_1_Send.
            Ridge_0_1_0_Om_90_r_0_0_1_r_1_1_1[ix][iy][iz] =
            Rsc3[ix + (16)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Facet_1_0_0_src_0_0_1_dest_2_0_1_Send.
            Ridge_1_0_0_Om_90_r_0_0_1_r_2_0_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Facet_1_0_0_src_0_0_1_dest_2_1_1_Send.
            Ridge_1_0_0_Om_90_r_0_0_1_r_2_1_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (27)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Facet_1_1_0_src_0_0_1_dest_2_1_1_Send.
            Ridge_1_1_0_Om_90_r_0_0_1_r_2_1_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_115 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_89_r_0_0_0_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (262)] =
            Facet_0_0_1_src_0_0_0_dest_0_0_1_Recv.
            Ridge_0_0_1_Om_89_r_0_0_0_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_90_r_0_0_0_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 29; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (262)] =
            Facet_0_0_1_src_0_0_0_dest_0_0_1_Recv.
            Ridge_0_0_1_Om_90_r_0_0_0_r_0_0_1[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (0, 16, 0, 27, 2, 264, Rsc2, 1, 1, -1, Rsc3, 1, 1, -1,
      Rsc2, 2, 1, -1, Rsc2, 0, 1, -1, Rsc2, 1, 2, -1, Rsc2, 1, 0, -1, Rsc2, 1,
      1, 0, Rsc2, 1, 1, -2, Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Ridge_0_0_0_Om_91_r_0_0_1_r_1_0_1[ix][iy][iz] =
            Rsc1[ix + (14)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Ridge_0_0_0_Om_91_r_0_0_1_r_0_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (25)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Ridge_0_0_0_Om_91_r_0_0_1_r_1_1_1[ix][iy][iz] =
            Rsc1[ix + (14)][iy + (25)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Facet_0_1_0_src_0_0_1_dest_0_1_1_Send.
            Ridge_0_1_0_Om_91_r_0_0_1_r_0_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Facet_0_1_0_src_0_0_1_dest_1_1_1_Send.
            Ridge_0_1_0_Om_91_r_0_0_1_r_1_1_1[ix][iy][iz] =
            Rsc1[ix + (14)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Facet_1_0_0_src_0_0_1_dest_2_0_1_Send.
            Ridge_1_0_0_Om_91_r_0_0_1_r_2_0_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Facet_1_0_0_src_0_0_1_dest_2_1_1_Send.
            Ridge_1_0_0_Om_91_r_0_0_1_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (25)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Facet_1_1_0_src_0_0_1_dest_2_1_1_Send.
            Ridge_1_1_0_Om_91_r_0_0_1_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_116 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (0, 16, 0, 27, 2, 264, Rsc3, 1, 1, -1, Rsc2, 1, 1, -1,
      Rsc3, 2, 1, -1, Rsc3, 0, 1, -1, Rsc3, 1, 2, -1, Rsc3, 1, 0, -1, Rsc3, 1,
      1, 0, Rsc3, 1, 1, -2, Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Ridge_0_0_0_Om_92_r_0_0_1_r_1_0_1[ix][iy][iz] =
            Rsc0[ix + (14)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Ridge_0_0_0_Om_92_r_0_0_1_r_0_1_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (25)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Ridge_0_0_0_Om_92_r_0_0_1_r_1_1_1[ix][iy][iz] =
            Rsc0[ix + (14)][iy + (25)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Facet_0_1_0_src_0_0_1_dest_0_1_1_Send.
            Ridge_0_1_0_Om_92_r_0_0_1_r_0_1_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Facet_0_1_0_src_0_0_1_dest_1_1_1_Send.
            Ridge_0_1_0_Om_92_r_0_0_1_r_1_1_1[ix][iy][iz] =
            Rsc0[ix + (14)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Facet_1_0_0_src_0_0_1_dest_2_0_1_Send.
            Ridge_1_0_0_Om_92_r_0_0_1_r_2_0_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Facet_1_0_0_src_0_0_1_dest_2_1_1_Send.
            Ridge_1_0_0_Om_92_r_0_0_1_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (25)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Facet_1_1_0_src_0_0_1_dest_2_1_1_Send.
            Ridge_1_1_0_Om_92_r_0_0_1_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_117 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_91_r_0_0_0_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (264)] =
            Facet_0_0_1_src_0_0_0_dest_0_0_1_Recv.
            Ridge_0_0_1_Om_91_r_0_0_0_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_92_r_0_0_0_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 27; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (264)] =
            Facet_0_0_1_src_0_0_0_dest_0_0_1_Recv.
            Ridge_0_0_1_Om_92_r_0_0_0_r_0_0_1[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_3 (10, 24, 10, 35, 258, 522, Rsc1, -9, -9, -257, Rsc0,
      -9, -9, -257, Rsc1, -8, -9, -257, Rsc1, -10, -9, -257, Rsc1, -9, -8, -257,
      Rsc1, -9, -10, -257, Rsc1, -9, -9, -256, Rsc1, -9, -9, -258, -8, -8, -8);

  }
}

void
Formura_internal_118 ()
{
#pragma omp parallel
  {
    Formura_subroutine_1 (10, 24, 10, 35, 258, 522, Rsc0, -9, -9, -257, Rsc1,
      -9, -9, -257, Rsc0, -8, -9, -257, Rsc0, -10, -9, -257, Rsc0, -9, -8, -257,
      Rsc0, -9, -10, -257, Rsc0, -9, -9, -256, Rsc0, -9, -9, -258, -8, -8, -8);

  }
}

void
Formura_internal_119 ()
{
#pragma omp parallel
  {
    Formura_subroutine_4 (2, 24, 0, 39, 2, 252, 29, 3, 263, 29, 3, 263, 30, 3,
      263, 28, 3, 263, 29, 4, 263, 29, 2, 263, 29, 3, 264, 29, 3, 262, Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 39; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Ridge_0_0_0_Om_79_r_1_0_1_r_2_0_1[ix][iy][iz] =
            Rsc0[ix + (22)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Ridge_0_0_0_Om_79_r_1_0_1_r_1_1_1[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (37)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Ridge_0_0_0_Om_79_r_1_0_1_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (22)][iy + (37)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Facet_0_1_0_src_1_0_1_dest_1_1_1_Send.
            Ridge_0_1_0_Om_79_r_1_0_1_r_1_1_1[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (0)][iz + (2)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Facet_0_1_0_src_1_0_1_dest_2_1_1_Send.
            Ridge_0_1_0_Om_79_r_1_0_1_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (22)][iy + (0)][iz + (2)];
        }
      }
    }

  }
}
