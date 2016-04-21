
#include <mpi.h>
#include <math.h>
#include <stdbool.h>
#include "pearson-3d.h"

void
Formura_internal_175 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_85_r_0_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_85_r_1_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_85_r_0_1_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (2)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_85_r_1_1_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_85_r_0_0_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc3[ix + (2)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_85_r_1_0_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc3[ix + (0)][iy + (2)][iz + (2)] =
            Ridge_0_0_0_Om_85_r_0_1_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (258)] =
            Facet_0_0_1_src_0_0_0_dest_1_1_1_Recv.
            Ridge_0_0_1_Om_85_r_0_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (2)][iy + (0)][iz + (258)] =
            Facet_0_0_1_src_1_0_0_dest_1_1_1_Recv.
            Ridge_0_0_1_Om_85_r_1_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (2)][iz + (258)] =
            Facet_0_0_1_src_0_1_0_dest_1_1_1_Recv.
            Ridge_0_0_1_Om_85_r_0_1_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (2)][iy + (2)][iz + (258)] =
            Facet_0_0_1_src_1_1_0_dest_1_1_1_Recv.
            Ridge_0_0_1_Om_85_r_1_1_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (34)][iz + (0)] =
            Facet_0_1_0_src_0_0_0_dest_1_1_1_Recv.
            Ridge_0_1_0_Om_85_r_0_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (2)][iy + (34)][iz + (0)] =
            Facet_0_1_0_src_1_0_0_dest_1_1_1_Recv.
            Ridge_0_1_0_Om_85_r_1_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc3[ix + (0)][iy + (34)][iz + (2)] =
            Facet_0_1_0_src_0_0_1_dest_1_1_1_Recv.
            Ridge_0_1_0_Om_85_r_0_0_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc3[ix + (2)][iy + (34)][iz + (2)] =
            Facet_0_1_0_src_1_0_1_dest_1_1_1_Recv.
            Ridge_0_1_0_Om_85_r_1_0_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (34)][iz + (258)] =
            Facet_0_1_1_src_0_0_0_dest_1_1_1_Recv.
            Ridge_0_1_1_Om_85_r_0_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (2)][iy + (34)][iz + (258)] =
            Facet_0_1_1_src_1_0_0_dest_1_1_1_Recv.
            Ridge_0_1_1_Om_85_r_1_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_86_r_0_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_86_r_1_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_86_r_0_1_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (2)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_86_r_1_1_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_86_r_0_0_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc2[ix + (2)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_86_r_1_0_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc2[ix + (0)][iy + (2)][iz + (2)] =
            Ridge_0_0_0_Om_86_r_0_1_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (258)] =
            Facet_0_0_1_src_0_0_0_dest_1_1_1_Recv.
            Ridge_0_0_1_Om_86_r_0_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (2)][iy + (0)][iz + (258)] =
            Facet_0_0_1_src_1_0_0_dest_1_1_1_Recv.
            Ridge_0_0_1_Om_86_r_1_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (2)][iz + (258)] =
            Facet_0_0_1_src_0_1_0_dest_1_1_1_Recv.
            Ridge_0_0_1_Om_86_r_0_1_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (2)][iy + (2)][iz + (258)] =
            Facet_0_0_1_src_1_1_0_dest_1_1_1_Recv.
            Ridge_0_0_1_Om_86_r_1_1_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (34)][iz + (0)] =
            Facet_0_1_0_src_0_0_0_dest_1_1_1_Recv.
            Ridge_0_1_0_Om_86_r_0_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (2)][iy + (34)][iz + (0)] =
            Facet_0_1_0_src_1_0_0_dest_1_1_1_Recv.
            Ridge_0_1_0_Om_86_r_1_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc2[ix + (0)][iy + (34)][iz + (2)] =
            Facet_0_1_0_src_0_0_1_dest_1_1_1_Recv.
            Ridge_0_1_0_Om_86_r_0_0_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc2[ix + (2)][iy + (34)][iz + (2)] =
            Facet_0_1_0_src_1_0_1_dest_1_1_1_Recv.
            Ridge_0_1_0_Om_86_r_1_0_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (34)][iz + (258)] =
            Facet_0_1_1_src_0_0_0_dest_1_1_1_Recv.
            Ridge_0_1_1_Om_86_r_0_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (2)][iy + (34)][iz + (258)] =
            Facet_0_1_1_src_1_0_0_dest_1_1_1_Recv.
            Ridge_0_1_1_Om_86_r_1_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (2, 23, 2, 36, 2, 260, Rsc3, -1, -1, -1, Rsc2, -1, -1,
      -1, Rsc3, 0, -1, -1, Rsc3, -2, -1, -1, Rsc3, -1, 0, -1, Rsc3, -1, -2, -1,
      Rsc3, -1, -1, 0, Rsc3, -1, -1, -2, Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Ridge_0_0_0_Om_87_r_1_1_1_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (21)][iy + (2)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_176 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (2, 23, 2, 36, 2, 260, Rsc2, -1, -1, -1, Rsc3, -1, -1,
      -1, Rsc2, 0, -1, -1, Rsc2, -2, -1, -1, Rsc2, -1, 0, -1, Rsc2, -1, -2, -1,
      Rsc2, -1, -1, 0, Rsc2, -1, -1, -2, Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Ridge_0_0_0_Om_88_r_1_1_1_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (21)][iy + (2)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_177 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_87_r_0_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_87_r_1_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_87_r_0_1_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_87_r_1_1_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_87_r_0_0_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc0[ix + (2)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_87_r_1_0_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc0[ix + (0)][iy + (2)][iz + (2)] =
            Ridge_0_0_0_Om_87_r_0_1_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (260)] =
            Facet_0_0_1_src_0_0_0_dest_1_1_1_Recv.
            Ridge_0_0_1_Om_87_r_0_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (0)][iz + (260)] =
            Facet_0_0_1_src_1_0_0_dest_1_1_1_Recv.
            Ridge_0_0_1_Om_87_r_1_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (2)][iz + (260)] =
            Facet_0_0_1_src_0_1_0_dest_1_1_1_Recv.
            Ridge_0_0_1_Om_87_r_0_1_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (2)][iz + (260)] =
            Facet_0_0_1_src_1_1_0_dest_1_1_1_Recv.
            Ridge_0_0_1_Om_87_r_1_1_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (36)][iz + (0)] =
            Facet_0_1_0_src_0_0_0_dest_1_1_1_Recv.
            Ridge_0_1_0_Om_87_r_0_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (36)][iz + (0)] =
            Facet_0_1_0_src_1_0_0_dest_1_1_1_Recv.
            Ridge_0_1_0_Om_87_r_1_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc0[ix + (0)][iy + (36)][iz + (2)] =
            Facet_0_1_0_src_0_0_1_dest_1_1_1_Recv.
            Ridge_0_1_0_Om_87_r_0_0_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc0[ix + (2)][iy + (36)][iz + (2)] =
            Facet_0_1_0_src_1_0_1_dest_1_1_1_Recv.
            Ridge_0_1_0_Om_87_r_1_0_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (36)][iz + (260)] =
            Facet_0_1_1_src_0_0_0_dest_1_1_1_Recv.
            Ridge_0_1_1_Om_87_r_0_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (36)][iz + (260)] =
            Facet_0_1_1_src_1_0_0_dest_1_1_1_Recv.
            Ridge_0_1_1_Om_87_r_1_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_88_r_0_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_88_r_1_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_88_r_0_1_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_88_r_1_1_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_88_r_0_0_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc1[ix + (2)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_88_r_1_0_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc1[ix + (0)][iy + (2)][iz + (2)] =
            Ridge_0_0_0_Om_88_r_0_1_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (260)] =
            Facet_0_0_1_src_0_0_0_dest_1_1_1_Recv.
            Ridge_0_0_1_Om_88_r_0_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (0)][iz + (260)] =
            Facet_0_0_1_src_1_0_0_dest_1_1_1_Recv.
            Ridge_0_0_1_Om_88_r_1_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (2)][iz + (260)] =
            Facet_0_0_1_src_0_1_0_dest_1_1_1_Recv.
            Ridge_0_0_1_Om_88_r_0_1_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (2)][iz + (260)] =
            Facet_0_0_1_src_1_1_0_dest_1_1_1_Recv.
            Ridge_0_0_1_Om_88_r_1_1_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (36)][iz + (0)] =
            Facet_0_1_0_src_0_0_0_dest_1_1_1_Recv.
            Ridge_0_1_0_Om_88_r_0_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (36)][iz + (0)] =
            Facet_0_1_0_src_1_0_0_dest_1_1_1_Recv.
            Ridge_0_1_0_Om_88_r_1_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc1[ix + (0)][iy + (36)][iz + (2)] =
            Facet_0_1_0_src_0_0_1_dest_1_1_1_Recv.
            Ridge_0_1_0_Om_88_r_0_0_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc1[ix + (2)][iy + (36)][iz + (2)] =
            Facet_0_1_0_src_1_0_1_dest_1_1_1_Recv.
            Ridge_0_1_0_Om_88_r_1_0_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (36)][iz + (260)] =
            Facet_0_1_1_src_0_0_0_dest_1_1_1_Recv.
            Ridge_0_1_1_Om_88_r_0_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (36)][iz + (260)] =
            Facet_0_1_1_src_1_0_0_dest_1_1_1_Recv.
            Ridge_0_1_1_Om_88_r_1_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (2, 23, 2, 38, 2, 262, Rsc0, -1, -1, -1, Rsc1, -1, -1,
      -1, Rsc0, 0, -1, -1, Rsc0, -2, -1, -1, Rsc0, -1, 0, -1, Rsc0, -1, -2, -1,
      Rsc0, -1, -1, 0, Rsc0, -1, -1, -2, Rsc2);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Ridge_0_0_0_Om_89_r_1_1_1_r_2_1_1[ix][iy][iz] =
            Rsc2[ix + (21)][iy + (2)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_178 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (2, 23, 2, 38, 2, 262, Rsc1, -1, -1, -1, Rsc0, -1, -1,
      -1, Rsc1, 0, -1, -1, Rsc1, -2, -1, -1, Rsc1, -1, 0, -1, Rsc1, -1, -2, -1,
      Rsc1, -1, -1, 0, Rsc1, -1, -1, -2, Rsc3);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Ridge_0_0_0_Om_90_r_1_1_1_r_2_1_1[ix][iy][iz] =
            Rsc3[ix + (21)][iy + (2)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_179 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_89_r_0_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_89_r_1_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_89_r_0_1_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (2)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_89_r_1_1_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_89_r_0_0_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc2[ix + (2)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_89_r_1_0_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc2[ix + (0)][iy + (2)][iz + (2)] =
            Ridge_0_0_0_Om_89_r_0_1_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (262)] =
            Facet_0_0_1_src_0_0_0_dest_1_1_1_Recv.
            Ridge_0_0_1_Om_89_r_0_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (2)][iy + (0)][iz + (262)] =
            Facet_0_0_1_src_1_0_0_dest_1_1_1_Recv.
            Ridge_0_0_1_Om_89_r_1_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (2)][iz + (262)] =
            Facet_0_0_1_src_0_1_0_dest_1_1_1_Recv.
            Ridge_0_0_1_Om_89_r_0_1_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (2)][iy + (2)][iz + (262)] =
            Facet_0_0_1_src_1_1_0_dest_1_1_1_Recv.
            Ridge_0_0_1_Om_89_r_1_1_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (38)][iz + (0)] =
            Facet_0_1_0_src_0_0_0_dest_1_1_1_Recv.
            Ridge_0_1_0_Om_89_r_0_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (2)][iy + (38)][iz + (0)] =
            Facet_0_1_0_src_1_0_0_dest_1_1_1_Recv.
            Ridge_0_1_0_Om_89_r_1_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc2[ix + (0)][iy + (38)][iz + (2)] =
            Facet_0_1_0_src_0_0_1_dest_1_1_1_Recv.
            Ridge_0_1_0_Om_89_r_0_0_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc2[ix + (2)][iy + (38)][iz + (2)] =
            Facet_0_1_0_src_1_0_1_dest_1_1_1_Recv.
            Ridge_0_1_0_Om_89_r_1_0_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (0)][iy + (38)][iz + (262)] =
            Facet_0_1_1_src_0_0_0_dest_1_1_1_Recv.
            Ridge_0_1_1_Om_89_r_0_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc2[ix + (2)][iy + (38)][iz + (262)] =
            Facet_0_1_1_src_1_0_0_dest_1_1_1_Recv.
            Ridge_0_1_1_Om_89_r_1_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_90_r_0_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_90_r_1_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_90_r_0_1_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (2)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_90_r_1_1_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_90_r_0_0_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc3[ix + (2)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_90_r_1_0_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc3[ix + (0)][iy + (2)][iz + (2)] =
            Ridge_0_0_0_Om_90_r_0_1_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (262)] =
            Facet_0_0_1_src_0_0_0_dest_1_1_1_Recv.
            Ridge_0_0_1_Om_90_r_0_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (2)][iy + (0)][iz + (262)] =
            Facet_0_0_1_src_1_0_0_dest_1_1_1_Recv.
            Ridge_0_0_1_Om_90_r_1_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (2)][iz + (262)] =
            Facet_0_0_1_src_0_1_0_dest_1_1_1_Recv.
            Ridge_0_0_1_Om_90_r_0_1_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (2)][iy + (2)][iz + (262)] =
            Facet_0_0_1_src_1_1_0_dest_1_1_1_Recv.
            Ridge_0_0_1_Om_90_r_1_1_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (38)][iz + (0)] =
            Facet_0_1_0_src_0_0_0_dest_1_1_1_Recv.
            Ridge_0_1_0_Om_90_r_0_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (2)][iy + (38)][iz + (0)] =
            Facet_0_1_0_src_1_0_0_dest_1_1_1_Recv.
            Ridge_0_1_0_Om_90_r_1_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc3[ix + (0)][iy + (38)][iz + (2)] =
            Facet_0_1_0_src_0_0_1_dest_1_1_1_Recv.
            Ridge_0_1_0_Om_90_r_0_0_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc3[ix + (2)][iy + (38)][iz + (2)] =
            Facet_0_1_0_src_1_0_1_dest_1_1_1_Recv.
            Ridge_0_1_0_Om_90_r_1_0_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (0)][iy + (38)][iz + (262)] =
            Facet_0_1_1_src_0_0_0_dest_1_1_1_Recv.
            Ridge_0_1_1_Om_90_r_0_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc3[ix + (2)][iy + (38)][iz + (262)] =
            Facet_0_1_1_src_1_0_0_dest_1_1_1_Recv.
            Ridge_0_1_1_Om_90_r_1_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (2, 23, 2, 40, 2, 264, Rsc2, -1, -1, -1, Rsc3, -1, -1,
      -1, Rsc2, 0, -1, -1, Rsc2, -2, -1, -1, Rsc2, -1, 0, -1, Rsc2, -1, -2, -1,
      Rsc2, -1, -1, 0, Rsc2, -1, -1, -2, Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Ridge_0_0_0_Om_91_r_1_1_1_r_2_1_1[ix][iy][iz] =
            Rsc1[ix + (21)][iy + (2)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_18 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (0, 17, 0, 28, 0, 252, Rsc1, 1, 1, 1, Rsc0, 1, 1, 1,
      Rsc1, 2, 1, 1, Rsc1, 0, 1, 1, Rsc1, 1, 2, 1, Rsc1, 1, 0, 1, Rsc1, 1, 1, 2,
      Rsc1, 1, 1, 0, Rsc3);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Ridge_0_0_0_Om_90_r_0_0_0_r_1_0_0[ix][iy][iz] =
            Rsc3[ix + (15)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 17; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Ridge_0_0_0_Om_90_r_0_0_0_r_0_1_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (26)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Ridge_0_0_0_Om_90_r_0_0_0_r_1_1_0[ix][iy][iz] =
            Rsc3[ix + (15)][iy + (26)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 17; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_90_r_0_0_0_r_0_0_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_90_r_0_0_0_r_1_0_1[ix][iy][iz] =
            Rsc3[ix + (15)][iy + (0)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 17; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_90_r_0_0_0_r_0_1_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (26)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_90_r_0_0_0_r_1_1_1[ix][iy][iz] =
            Rsc3[ix + (15)][iy + (26)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 17; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_0_0_dest_0_0_1_Send.
            Ridge_0_0_1_Om_90_r_0_0_0_r_0_0_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_0_0_dest_1_0_1_Send.
            Ridge_0_0_1_Om_90_r_0_0_0_r_1_0_1[ix][iy][iz] =
            Rsc3[ix + (15)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 17; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_0_0_dest_0_1_1_Send.
            Ridge_0_0_1_Om_90_r_0_0_0_r_0_1_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (26)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_0_0_0_dest_1_1_1_Send.
            Ridge_0_0_1_Om_90_r_0_0_0_r_1_1_1[ix][iy][iz] =
            Rsc3[ix + (15)][iy + (26)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 17; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Facet_0_1_0_src_0_0_0_dest_0_1_0_Send.
            Ridge_0_1_0_Om_90_r_0_0_0_r_0_1_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Facet_0_1_0_src_0_0_0_dest_1_1_0_Send.
            Ridge_0_1_0_Om_90_r_0_0_0_r_1_1_0[ix][iy][iz] =
            Rsc3[ix + (15)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 17; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_0_src_0_0_0_dest_0_1_1_Send.
            Ridge_0_1_0_Om_90_r_0_0_0_r_0_1_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_0_src_0_0_0_dest_1_1_1_Send.
            Ridge_0_1_0_Om_90_r_0_0_0_r_1_1_1[ix][iy][iz] =
            Rsc3[ix + (15)][iy + (0)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 17; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_1_src_0_0_0_dest_0_1_1_Send.
            Ridge_0_1_1_Om_90_r_0_0_0_r_0_1_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_1_src_0_0_0_dest_1_1_1_Send.
            Ridge_0_1_1_Om_90_r_0_0_0_r_1_1_1[ix][iy][iz] =
            Rsc3[ix + (15)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Facet_1_0_0_src_0_0_0_dest_2_0_0_Send.
            Ridge_1_0_0_Om_90_r_0_0_0_r_2_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Facet_1_0_0_src_0_0_0_dest_2_1_0_Send.
            Ridge_1_0_0_Om_90_r_0_0_0_r_2_1_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (26)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_0_src_0_0_0_dest_2_0_1_Send.
            Ridge_1_0_0_Om_90_r_0_0_0_r_2_0_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_0_src_0_0_0_dest_2_1_1_Send.
            Ridge_1_0_0_Om_90_r_0_0_0_r_2_1_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (26)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_1_src_0_0_0_dest_2_0_1_Send.
            Ridge_1_0_1_Om_90_r_0_0_0_r_2_0_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_0_1_src_0_0_0_dest_2_1_1_Send.
            Ridge_1_0_1_Om_90_r_0_0_0_r_2_1_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (26)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Facet_1_1_0_src_0_0_0_dest_2_1_0_Send.
            Ridge_1_1_0_Om_90_r_0_0_0_r_2_1_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_1_0_src_0_0_0_dest_2_1_1_Send.
            Ridge_1_1_0_Om_90_r_0_0_0_r_2_1_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_1_1_1_src_0_0_0_dest_2_1_1_Send.
            Ridge_1_1_1_Om_90_r_0_0_0_r_2_1_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (0)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_180 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (2, 23, 2, 40, 2, 264, Rsc3, -1, -1, -1, Rsc2, -1, -1,
      -1, Rsc3, 0, -1, -1, Rsc3, -2, -1, -1, Rsc3, -1, 0, -1, Rsc3, -1, -2, -1,
      Rsc3, -1, -1, 0, Rsc3, -1, -1, -2, Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Ridge_0_0_0_Om_92_r_1_1_1_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (21)][iy + (2)][iz + (2)];
        }
      }
    }

  }
}

void
Formura_internal_181 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_91_r_0_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_91_r_1_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_91_r_0_1_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_91_r_1_1_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_91_r_0_0_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc1[ix + (2)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_91_r_1_0_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc1[ix + (0)][iy + (2)][iz + (2)] =
            Ridge_0_0_0_Om_91_r_0_1_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (264)] =
            Facet_0_0_1_src_0_0_0_dest_1_1_1_Recv.
            Ridge_0_0_1_Om_91_r_0_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (0)][iz + (264)] =
            Facet_0_0_1_src_1_0_0_dest_1_1_1_Recv.
            Ridge_0_0_1_Om_91_r_1_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (2)][iz + (264)] =
            Facet_0_0_1_src_0_1_0_dest_1_1_1_Recv.
            Ridge_0_0_1_Om_91_r_0_1_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (2)][iz + (264)] =
            Facet_0_0_1_src_1_1_0_dest_1_1_1_Recv.
            Ridge_0_0_1_Om_91_r_1_1_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (40)][iz + (0)] =
            Facet_0_1_0_src_0_0_0_dest_1_1_1_Recv.
            Ridge_0_1_0_Om_91_r_0_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (40)][iz + (0)] =
            Facet_0_1_0_src_1_0_0_dest_1_1_1_Recv.
            Ridge_0_1_0_Om_91_r_1_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc1[ix + (0)][iy + (40)][iz + (2)] =
            Facet_0_1_0_src_0_0_1_dest_1_1_1_Recv.
            Ridge_0_1_0_Om_91_r_0_0_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc1[ix + (2)][iy + (40)][iz + (2)] =
            Facet_0_1_0_src_1_0_1_dest_1_1_1_Recv.
            Ridge_0_1_0_Om_91_r_1_0_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (40)][iz + (264)] =
            Facet_0_1_1_src_0_0_0_dest_1_1_1_Recv.
            Ridge_0_1_1_Om_91_r_0_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (40)][iz + (264)] =
            Facet_0_1_1_src_1_0_0_dest_1_1_1_Recv.
            Ridge_0_1_1_Om_91_r_1_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_92_r_0_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_92_r_1_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_92_r_0_1_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_92_r_1_1_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_92_r_0_0_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc0[ix + (2)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_92_r_1_0_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc0[ix + (0)][iy + (2)][iz + (2)] =
            Ridge_0_0_0_Om_92_r_0_1_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (264)] =
            Facet_0_0_1_src_0_0_0_dest_1_1_1_Recv.
            Ridge_0_0_1_Om_92_r_0_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (0)][iz + (264)] =
            Facet_0_0_1_src_1_0_0_dest_1_1_1_Recv.
            Ridge_0_0_1_Om_92_r_1_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (2)][iz + (264)] =
            Facet_0_0_1_src_0_1_0_dest_1_1_1_Recv.
            Ridge_0_0_1_Om_92_r_0_1_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (2)][iz + (264)] =
            Facet_0_0_1_src_1_1_0_dest_1_1_1_Recv.
            Ridge_0_0_1_Om_92_r_1_1_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (40)][iz + (0)] =
            Facet_0_1_0_src_0_0_0_dest_1_1_1_Recv.
            Ridge_0_1_0_Om_92_r_0_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (40)][iz + (0)] =
            Facet_0_1_0_src_1_0_0_dest_1_1_1_Recv.
            Ridge_0_1_0_Om_92_r_1_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc0[ix + (0)][iy + (40)][iz + (2)] =
            Facet_0_1_0_src_0_0_1_dest_1_1_1_Recv.
            Ridge_0_1_0_Om_92_r_0_0_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc0[ix + (2)][iy + (40)][iz + (2)] =
            Facet_0_1_0_src_1_0_1_dest_1_1_1_Recv.
            Ridge_0_1_0_Om_92_r_1_0_1_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (40)][iz + (264)] =
            Facet_0_1_1_src_0_0_0_dest_1_1_1_Recv.
            Ridge_0_1_1_Om_92_r_0_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (40)][iz + (264)] =
            Facet_0_1_1_src_1_0_0_dest_1_1_1_Recv.
            Ridge_0_1_1_Om_92_r_1_0_0_r_1_1_1[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_3 (23, 44, 34, 74, 258, 522, Rsc1, -22, -33, -257, Rsc0,
      -22, -33, -257, Rsc1, -21, -33, -257, Rsc1, -23, -33, -257, Rsc1, -22,
      -32, -257, Rsc1, -22, -34, -257, Rsc1, -22, -33, -256, Rsc1, -22, -33,
      -258, -8, -8, -8);

  }
}

void
Formura_internal_182 ()
{
#pragma omp parallel
  {
    Formura_subroutine_1 (23, 44, 34, 74, 258, 522, Rsc0, -22, -33, -257, Rsc1,
      -22, -33, -257, Rsc0, -21, -33, -257, Rsc0, -23, -33, -257, Rsc0, -22,
      -32, -257, Rsc0, -22, -34, -257, Rsc0, -22, -33, -256, Rsc0, -22, -33,
      -258, -8, -8, -8);

  }
}

void
Formura_internal_183 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          U[ix + (66)][iy + (66)][iz + (514)] =
            Facet_1_1_1_src_0_0_0_dest_2_1_1_Recv.Ridge_1_1_1_St_U[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          V[ix + (66)][iy + (66)][iz + (514)] =
            Facet_1_1_1_src_0_0_0_dest_2_1_1_Recv.Ridge_1_1_1_St_V[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_4 (2, 18, 2, 28, 2, 252, 49, 39, 263, 49, 39, 263, 50,
      39, 263, 48, 39, 263, 49, 40, 263, 49, 38, 263, 49, 39, 264, 49, 39, 262,
      Rsc0);

  }
}

void
Formura_internal_184 ()
{
#pragma omp parallel
  {
    Formura_subroutine_5 (2, 18, 2, 28, 2, 252, 49, 39, 263, 49, 39, 263, 50,
      39, 263, 48, 39, 263, 49, 40, 263, 49, 38, 263, 49, 39, 264, 49, 39, 262,
      Rsc1);

  }
}

void
Formura_internal_185 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_79_r_1_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_79_r_2_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_79_r_1_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_79_r_2_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_79_r_1_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (2)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_79_r_2_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (0)][iy + (2)][iz + (2)] =
            Ridge_0_0_0_Om_79_r_1_1_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (252)] =
            Facet_0_0_1_src_1_0_0_dest_2_1_1_Recv.
            Ridge_0_0_1_Om_79_r_1_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (0)][iz + (252)] =
            Facet_0_0_1_src_2_0_0_dest_2_1_1_Recv.
            Ridge_0_0_1_Om_79_r_2_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (2)][iz + (252)] =
            Facet_0_0_1_src_1_1_0_dest_2_1_1_Recv.
            Ridge_0_0_1_Om_79_r_1_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (2)][iz + (252)] =
            Facet_0_0_1_src_2_1_0_dest_2_1_1_Recv.
            Ridge_0_0_1_Om_79_r_2_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (28)][iz + (0)] =
            Facet_0_1_0_src_1_0_0_dest_2_1_1_Recv.
            Ridge_0_1_0_Om_79_r_1_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (28)][iz + (0)] =
            Facet_0_1_0_src_2_0_0_dest_2_1_1_Recv.
            Ridge_0_1_0_Om_79_r_2_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (0)][iy + (28)][iz + (2)] =
            Facet_0_1_0_src_1_0_1_dest_2_1_1_Recv.
            Ridge_0_1_0_Om_79_r_1_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (2)][iy + (28)][iz + (2)] =
            Facet_0_1_0_src_2_0_1_dest_2_1_1_Recv.
            Ridge_0_1_0_Om_79_r_2_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (0)][iy + (28)][iz + (252)] =
            Facet_0_1_1_src_1_0_0_dest_2_1_1_Recv.
            Ridge_0_1_1_Om_79_r_1_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (2)][iy + (28)][iz + (252)] =
            Facet_0_1_1_src_2_0_0_dest_2_1_1_Recv.
            Ridge_0_1_1_Om_79_r_2_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (18)][iy + (0)][iz + (0)] =
            Facet_1_0_0_src_0_0_0_dest_2_1_1_Recv.
            Ridge_1_0_0_Om_79_r_0_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (18)][iy + (2)][iz + (0)] =
            Facet_1_0_0_src_0_1_0_dest_2_1_1_Recv.
            Ridge_1_0_0_Om_79_r_0_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (18)][iy + (0)][iz + (2)] =
            Facet_1_0_0_src_0_0_1_dest_2_1_1_Recv.
            Ridge_1_0_0_Om_79_r_0_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (18)][iy + (2)][iz + (2)] =
            Facet_1_0_0_src_0_1_1_dest_2_1_1_Recv.
            Ridge_1_0_0_Om_79_r_0_1_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (18)][iy + (0)][iz + (252)] =
            Facet_1_0_1_src_0_0_0_dest_2_1_1_Recv.
            Ridge_1_0_1_Om_79_r_0_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (18)][iy + (2)][iz + (252)] =
            Facet_1_0_1_src_0_1_0_dest_2_1_1_Recv.
            Ridge_1_0_1_Om_79_r_0_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (18)][iy + (28)][iz + (0)] =
            Facet_1_1_0_src_0_0_0_dest_2_1_1_Recv.
            Ridge_1_1_0_Om_79_r_0_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (18)][iy + (28)][iz + (2)] =
            Facet_1_1_0_src_0_0_1_dest_2_1_1_Recv.
            Ridge_1_1_0_Om_79_r_0_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc0[ix + (18)][iy + (28)][iz + (252)] =
            Facet_1_1_1_src_0_0_0_dest_2_1_1_Recv.
            Ridge_1_1_1_Om_79_r_0_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_80_r_1_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_80_r_2_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_80_r_1_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_80_r_2_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_80_r_1_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (2)][iy + (0)][iz + (2)] =
            Ridge_0_0_0_Om_80_r_2_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (0)][iy + (2)][iz + (2)] =
            Ridge_0_0_0_Om_80_r_1_1_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (252)] =
            Facet_0_0_1_src_1_0_0_dest_2_1_1_Recv.
            Ridge_0_0_1_Om_80_r_1_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (0)][iz + (252)] =
            Facet_0_0_1_src_2_0_0_dest_2_1_1_Recv.
            Ridge_0_0_1_Om_80_r_2_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (2)][iz + (252)] =
            Facet_0_0_1_src_1_1_0_dest_2_1_1_Recv.
            Ridge_0_0_1_Om_80_r_1_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (2)][iz + (252)] =
            Facet_0_0_1_src_2_1_0_dest_2_1_1_Recv.
            Ridge_0_0_1_Om_80_r_2_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (28)][iz + (0)] =
            Facet_0_1_0_src_1_0_0_dest_2_1_1_Recv.
            Ridge_0_1_0_Om_80_r_1_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (28)][iz + (0)] =
            Facet_0_1_0_src_2_0_0_dest_2_1_1_Recv.
            Ridge_0_1_0_Om_80_r_2_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (0)][iy + (28)][iz + (2)] =
            Facet_0_1_0_src_1_0_1_dest_2_1_1_Recv.
            Ridge_0_1_0_Om_80_r_1_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (2)][iy + (28)][iz + (2)] =
            Facet_0_1_0_src_2_0_1_dest_2_1_1_Recv.
            Ridge_0_1_0_Om_80_r_2_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (0)][iy + (28)][iz + (252)] =
            Facet_0_1_1_src_1_0_0_dest_2_1_1_Recv.
            Ridge_0_1_1_Om_80_r_1_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (2)][iy + (28)][iz + (252)] =
            Facet_0_1_1_src_2_0_0_dest_2_1_1_Recv.
            Ridge_0_1_1_Om_80_r_2_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (18)][iy + (0)][iz + (0)] =
            Facet_1_0_0_src_0_0_0_dest_2_1_1_Recv.
            Ridge_1_0_0_Om_80_r_0_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (18)][iy + (2)][iz + (0)] =
            Facet_1_0_0_src_0_1_0_dest_2_1_1_Recv.
            Ridge_1_0_0_Om_80_r_0_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (18)][iy + (0)][iz + (2)] =
            Facet_1_0_0_src_0_0_1_dest_2_1_1_Recv.
            Ridge_1_0_0_Om_80_r_0_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (18)][iy + (2)][iz + (2)] =
            Facet_1_0_0_src_0_1_1_dest_2_1_1_Recv.
            Ridge_1_0_0_Om_80_r_0_1_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (18)][iy + (0)][iz + (252)] =
            Facet_1_0_1_src_0_0_0_dest_2_1_1_Recv.
            Ridge_1_0_1_Om_80_r_0_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (18)][iy + (2)][iz + (252)] =
            Facet_1_0_1_src_0_1_0_dest_2_1_1_Recv.
            Ridge_1_0_1_Om_80_r_0_1_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (18)][iy + (28)][iz + (0)] =
            Facet_1_1_0_src_0_0_0_dest_2_1_1_Recv.
            Ridge_1_1_0_Om_80_r_0_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (18)][iy + (28)][iz + (2)] =
            Facet_1_1_0_src_0_0_1_dest_2_1_1_Recv.
            Ridge_1_1_0_Om_80_r_0_0_1_r_2_1_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Rsc1[ix + (18)][iy + (28)][iz + (252)] =
            Facet_1_1_1_src_0_0_0_dest_2_1_1_Recv.
            Ridge_1_1_1_Om_80_r_0_0_0_r_2_1_1[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (2, 20, 2, 30, 2, 254, Rsc0, -1, -1, -1, Rsc1, -1, -1,
      -1, Rsc0, 0, -1, -1, Rsc0, -2, -1, -1, Rsc0, -1, 0, -1, Rsc0, -1, -2, -1,
      Rsc0, -1, -1, 0, Rsc0, -1, -1, -2, Rsc3);

  }
}

void
Formura_internal_186 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (2, 20, 2, 30, 2, 254, Rsc1, -1, -1, -1, Rsc0, -1, -1,
      -1, Rsc1, 0, -1, -1, Rsc1, -2, -1, -1, Rsc1, -1, 0, -1, Rsc1, -1, -2, -1,
      Rsc1, -1, -1, 0, Rsc1, -1, -1, -2, Rsc2);

  }
}
