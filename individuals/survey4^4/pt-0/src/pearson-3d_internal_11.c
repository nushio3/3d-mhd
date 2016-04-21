
#include <mpi.h>
#include <math.h>
#include <stdbool.h>
#include "pearson-3d.h"

void
Formura_internal_271 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (0, 21, 2, 34, 0, 256, Rsc0, 1, -1, 1, Rsc1, 1, -1, 1,
      Rsc0, 2, -1, 1, Rsc0, 0, -1, 1, Rsc0, 1, 0, 1, Rsc0, 1, -2, 1, Rsc0, 1,
      -1, 2, Rsc0, 1, -1, 0, Rsc2);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_1_0_1_dest_0_0_0_Send.
            Ridge_0_0_m1_Om_86_r_1_0_1_r_0_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (2)][iz + (254)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_1_0_1_dest_1_0_0_Send.
            Ridge_0_0_m1_Om_86_r_1_0_1_r_1_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (2)][iz + (254)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_86_r_1_0_1_r_0_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_86_r_1_0_1_r_1_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Ridge_0_0_0_Om_86_r_1_0_1_r_0_0_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_272 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc3[ix + (21)][iy + (0)][iz + (0)] =
            Facet_0_m1_0_src_2_1_1_dest_1_0_1_Recv.
            Ridge_0_m1_0_Om_85_r_2_1_1_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_m1_0_src_1_1_1_dest_1_0_1_Recv.
            Ridge_0_m1_0_Om_85_r_1_1_1_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc3[ix + (21)][iy + (34)][iz + (0)] =
            Ridge_0_0_0_Om_85_r_2_1_1_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc3[ix + (0)][iy + (34)][iz + (0)] =
            Ridge_0_0_0_Om_85_r_1_1_1_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc3[ix + (21)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_85_r_2_0_1_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc2[ix + (21)][iy + (0)][iz + (0)] =
            Facet_0_m1_0_src_2_1_1_dest_1_0_1_Recv.
            Ridge_0_m1_0_Om_86_r_2_1_1_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_m1_0_src_1_1_1_dest_1_0_1_Recv.
            Ridge_0_m1_0_Om_86_r_1_1_1_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc2[ix + (21)][iy + (34)][iz + (0)] =
            Ridge_0_0_0_Om_86_r_2_1_1_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc2[ix + (0)][iy + (34)][iz + (0)] =
            Ridge_0_0_0_Om_86_r_1_1_1_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc2[ix + (21)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_86_r_2_0_1_r_1_0_1[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (0, 21, 2, 36, 0, 254, Rsc3, 1, -1, 1, Rsc2, 1, -1, 1,
      Rsc3, 2, -1, 1, Rsc3, 0, -1, 1, Rsc3, 1, 0, 1, Rsc3, 1, -2, 1, Rsc3, 1,
      -1, 2, Rsc3, 1, -1, 0, Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_1_0_1_dest_0_0_0_Send.
            Ridge_0_0_m1_Om_87_r_1_0_1_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (2)][iz + (252)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_1_0_1_dest_1_0_0_Send.
            Ridge_0_0_m1_Om_87_r_1_0_1_r_1_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (2)][iz + (252)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_87_r_1_0_1_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_87_r_1_0_1_r_1_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Ridge_0_0_0_Om_87_r_1_0_1_r_0_0_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_273 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (0, 21, 2, 36, 0, 254, Rsc2, 1, -1, 1, Rsc3, 1, -1, 1,
      Rsc2, 2, -1, 1, Rsc2, 0, -1, 1, Rsc2, 1, 0, 1, Rsc2, 1, -2, 1, Rsc2, 1,
      -1, 2, Rsc2, 1, -1, 0, Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_1_0_1_dest_0_0_0_Send.
            Ridge_0_0_m1_Om_88_r_1_0_1_r_0_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (2)][iz + (252)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_1_0_1_dest_1_0_0_Send.
            Ridge_0_0_m1_Om_88_r_1_0_1_r_1_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (2)][iz + (252)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_88_r_1_0_1_r_0_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_88_r_1_0_1_r_1_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Ridge_0_0_0_Om_88_r_1_0_1_r_0_0_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_274 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (21)][iy + (0)][iz + (0)] =
            Facet_0_m1_0_src_2_1_1_dest_1_0_1_Recv.
            Ridge_0_m1_0_Om_87_r_2_1_1_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_m1_0_src_1_1_1_dest_1_0_1_Recv.
            Ridge_0_m1_0_Om_87_r_1_1_1_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (21)][iy + (36)][iz + (0)] =
            Ridge_0_0_0_Om_87_r_2_1_1_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (0)][iy + (36)][iz + (0)] =
            Ridge_0_0_0_Om_87_r_1_1_1_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (21)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_87_r_2_0_1_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (21)][iy + (0)][iz + (0)] =
            Facet_0_m1_0_src_2_1_1_dest_1_0_1_Recv.
            Ridge_0_m1_0_Om_88_r_2_1_1_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_m1_0_src_1_1_1_dest_1_0_1_Recv.
            Ridge_0_m1_0_Om_88_r_1_1_1_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (21)][iy + (36)][iz + (0)] =
            Ridge_0_0_0_Om_88_r_2_1_1_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (0)][iy + (36)][iz + (0)] =
            Ridge_0_0_0_Om_88_r_1_1_1_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (21)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_88_r_2_0_1_r_1_0_1[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (0, 21, 2, 38, 0, 252, Rsc0, 1, -1, 1, Rsc1, 1, -1, 1,
      Rsc0, 2, -1, 1, Rsc0, 0, -1, 1, Rsc0, 1, 0, 1, Rsc0, 1, -2, 1, Rsc0, 1,
      -1, 2, Rsc0, 1, -1, 0, Rsc2);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_1_0_1_dest_0_0_0_Send.
            Ridge_0_0_m1_Om_89_r_1_0_1_r_0_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (2)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_1_0_1_dest_1_0_0_Send.
            Ridge_0_0_m1_Om_89_r_1_0_1_r_1_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (2)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_89_r_1_0_1_r_0_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_89_r_1_0_1_r_1_0_0[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Ridge_0_0_0_Om_89_r_1_0_1_r_0_0_1[ix][iy][iz] =
            Rsc2[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_275 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (0, 21, 2, 38, 0, 252, Rsc1, 1, -1, 1, Rsc0, 1, -1, 1,
      Rsc1, 2, -1, 1, Rsc1, 0, -1, 1, Rsc1, 1, 0, 1, Rsc1, 1, -2, 1, Rsc1, 1,
      -1, 2, Rsc1, 1, -1, 0, Rsc3);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_1_0_1_dest_0_0_0_Send.
            Ridge_0_0_m1_Om_90_r_1_0_1_r_0_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (2)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_1_0_1_dest_1_0_0_Send.
            Ridge_0_0_m1_Om_90_r_1_0_1_r_1_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (2)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_90_r_1_0_1_r_0_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_90_r_1_0_1_r_1_0_0[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Ridge_0_0_0_Om_90_r_1_0_1_r_0_0_1[ix][iy][iz] =
            Rsc3[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_276 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (21)][iy + (0)][iz + (0)] =
            Facet_0_m1_0_src_2_1_1_dest_1_0_1_Recv.
            Ridge_0_m1_0_Om_89_r_2_1_1_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_m1_0_src_1_1_1_dest_1_0_1_Recv.
            Ridge_0_m1_0_Om_89_r_1_1_1_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (21)][iy + (38)][iz + (0)] =
            Ridge_0_0_0_Om_89_r_2_1_1_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (0)][iy + (38)][iz + (0)] =
            Ridge_0_0_0_Om_89_r_1_1_1_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (21)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_89_r_2_0_1_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (21)][iy + (0)][iz + (0)] =
            Facet_0_m1_0_src_2_1_1_dest_1_0_1_Recv.
            Ridge_0_m1_0_Om_90_r_2_1_1_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_m1_0_src_1_1_1_dest_1_0_1_Recv.
            Ridge_0_m1_0_Om_90_r_1_1_1_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (21)][iy + (38)][iz + (0)] =
            Ridge_0_0_0_Om_90_r_2_1_1_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (0)][iy + (38)][iz + (0)] =
            Ridge_0_0_0_Om_90_r_1_1_1_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (21)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_90_r_2_0_1_r_1_0_1[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (0, 21, 2, 40, 0, 250, Rsc2, 1, -1, 1, Rsc3, 1, -1, 1,
      Rsc2, 2, -1, 1, Rsc2, 0, -1, 1, Rsc2, 1, 0, 1, Rsc2, 1, -2, 1, Rsc2, 1,
      -1, 2, Rsc2, 1, -1, 0, Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_1_0_1_dest_0_0_0_Send.
            Ridge_0_0_m1_Om_91_r_1_0_1_r_0_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (2)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_1_0_1_dest_1_0_0_Send.
            Ridge_0_0_m1_Om_91_r_1_0_1_r_1_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (2)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_91_r_1_0_1_r_0_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_91_r_1_0_1_r_1_0_0[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Ridge_0_0_0_Om_91_r_1_0_1_r_0_0_1[ix][iy][iz] =
            Rsc1[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_277 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (0, 21, 2, 40, 0, 250, Rsc3, 1, -1, 1, Rsc2, 1, -1, 1,
      Rsc3, 2, -1, 1, Rsc3, 0, -1, 1, Rsc3, 1, 0, 1, Rsc3, 1, -2, 1, Rsc3, 1,
      -1, 2, Rsc3, 1, -1, 0, Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_1_0_1_dest_0_0_0_Send.
            Ridge_0_0_m1_Om_92_r_1_0_1_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (2)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_1_0_1_dest_1_0_0_Send.
            Ridge_0_0_m1_Om_92_r_1_0_1_r_1_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (2)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_92_r_1_0_1_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_92_r_1_0_1_r_1_0_0[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Ridge_0_0_0_Om_92_r_1_0_1_r_0_0_1[ix][iy][iz] =
            Rsc0[ix + (0)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_278 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (21)][iy + (0)][iz + (0)] =
            Facet_0_m1_0_src_2_1_1_dest_1_0_1_Recv.
            Ridge_0_m1_0_Om_91_r_2_1_1_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_m1_0_src_1_1_1_dest_1_0_1_Recv.
            Ridge_0_m1_0_Om_91_r_1_1_1_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (21)][iy + (40)][iz + (0)] =
            Ridge_0_0_0_Om_91_r_2_1_1_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (0)][iy + (40)][iz + (0)] =
            Ridge_0_0_0_Om_91_r_1_1_1_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc1[ix + (21)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_91_r_2_0_1_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (21)][iy + (0)][iz + (0)] =
            Facet_0_m1_0_src_2_1_1_dest_1_0_1_Recv.
            Ridge_0_m1_0_Om_92_r_2_1_1_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Facet_0_m1_0_src_1_1_1_dest_1_0_1_Recv.
            Ridge_0_m1_0_Om_92_r_1_1_1_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (21)][iy + (40)][iz + (0)] =
            Ridge_0_0_0_Om_92_r_2_1_1_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (0)][iy + (40)][iz + (0)] =
            Ridge_0_0_0_Om_92_r_1_1_1_r_1_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 250; ++iz) {
          Rsc0[ix + (21)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_92_r_2_0_1_r_1_0_1[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_3 (24, 45, -6, 34, 258, 506, Rsc1, -23, 7, -257, Rsc0,
      -23, 7, -257, Rsc1, -22, 7, -257, Rsc1, -24, 7, -257, Rsc1, -23, 8, -257,
      Rsc1, -23, 6, -257, Rsc1, -23, 7, -256, Rsc1, -23, 7, -258, 8, 8, 8);

  }
}

void
Formura_internal_279 ()
{
#pragma omp parallel
  {
    Formura_subroutine_1 (24, 45, -6, 34, 258, 506, Rsc0, -23, 7, -257, Rsc1,
      -23, 7, -257, Rsc0, -22, 7, -257, Rsc0, -24, 7, -257, Rsc0, -23, 8, -257,
      Rsc0, -23, 6, -257, Rsc0, -23, 7, -256, Rsc0, -23, 7, -258, 8, 8, 8);

  }
}

void
Formura_internal_28 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (2, 23, 0, 34, 0, 258, Rsc2, -1, 1, 1, Rsc3, -1, 1, 1,
      Rsc2, 0, 1, 1, Rsc2, -2, 1, 1, Rsc2, -1, 2, 1, Rsc2, -1, 0, 1, Rsc2, -1,
      1, 2, Rsc2, -1, 1, 0, Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Ridge_0_0_0_Om_84_r_1_0_0_r_2_0_0[ix][iy][iz] =
            Rsc0[ix + (21)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Ridge_0_0_0_Om_84_r_1_0_0_r_1_1_0[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (32)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Ridge_0_0_0_Om_84_r_1_0_0_r_2_1_0[ix][iy][iz] =
            Rsc0[ix + (21)][iy + (32)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_84_r_1_0_0_r_1_0_1[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (0)][iz + (256)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_84_r_1_0_0_r_2_0_1[ix][iy][iz] =
            Rsc0[ix + (21)][iy + (0)][iz + (256)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_84_r_1_0_0_r_1_1_1[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (32)][iz + (256)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_84_r_1_0_0_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (21)][iy + (32)][iz + (256)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_0_0_dest_1_0_1_Send.
            Ridge_0_0_1_Om_84_r_1_0_0_r_1_0_1[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_0_0_dest_2_0_1_Send.
            Ridge_0_0_1_Om_84_r_1_0_0_r_2_0_1[ix][iy][iz] =
            Rsc0[ix + (21)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_0_0_dest_1_1_1_Send.
            Ridge_0_0_1_Om_84_r_1_0_0_r_1_1_1[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (32)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_0_0_dest_2_1_1_Send.
            Ridge_0_0_1_Om_84_r_1_0_0_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (21)][iy + (32)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Facet_0_1_0_src_1_0_0_dest_1_1_0_Send.
            Ridge_0_1_0_Om_84_r_1_0_0_r_1_1_0[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Facet_0_1_0_src_1_0_0_dest_2_1_0_Send.
            Ridge_0_1_0_Om_84_r_1_0_0_r_2_1_0[ix][iy][iz] =
            Rsc0[ix + (21)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_0_src_1_0_0_dest_1_1_1_Send.
            Ridge_0_1_0_Om_84_r_1_0_0_r_1_1_1[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (0)][iz + (256)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_0_src_1_0_0_dest_2_1_1_Send.
            Ridge_0_1_0_Om_84_r_1_0_0_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (21)][iy + (0)][iz + (256)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_1_src_1_0_0_dest_1_1_1_Send.
            Ridge_0_1_1_Om_84_r_1_0_0_r_1_1_1[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_1_src_1_0_0_dest_2_1_1_Send.
            Ridge_0_1_1_Om_84_r_1_0_0_r_2_1_1[ix][iy][iz] =
            Rsc0[ix + (21)][iy + (0)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_280 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 512; ++iz) {
          U[ix + (0)][iy + (0)][iz + (2)] =
            Facet_m1_m1_0_src_2_1_1_dest_0_0_1_Recv.
            Ridge_m1_m1_0_St_U[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 512; ++iz) {
          V[ix + (0)][iy + (0)][iz + (2)] =
            Facet_m1_m1_0_src_2_1_1_dest_0_0_1_Recv.
            Ridge_m1_m1_0_St_V[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_4 (2, 18, 2, 28, 0, 262, -1, -1, 251, -1, -1, 251, 0, -1,
      251, -2, -1, 251, -1, 0, 251, -1, -2, 251, -1, -1, 252, -1, -1, 250,
      Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_0_0_1_dest_0_0_0_Send.
            Ridge_0_0_m1_Om_79_r_0_0_1_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (2)][iz + (260)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_79_r_0_0_1_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_281 ()
{
#pragma omp parallel
  {
    Formura_subroutine_5 (2, 18, 2, 28, 0, 262, -1, -1, 251, -1, -1, 251, 0, -1,
      251, -2, -1, 251, -1, 0, 251, -1, -2, 251, -1, -1, 252, -1, -1, 250,
      Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_0_0_1_dest_0_0_0_Send.
            Ridge_0_0_m1_Om_80_r_0_0_1_r_0_0_0[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (2)][iz + (260)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_80_r_0_0_1_r_0_0_0[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_282 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Facet_m1_m1_0_src_2_1_1_dest_0_0_1_Recv.
            Ridge_m1_m1_0_Om_79_r_2_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc0[ix + (0)][iy + (28)][iz + (0)] =
            Facet_m1_0_0_src_2_1_1_dest_0_0_1_Recv.
            Ridge_m1_0_0_Om_79_r_2_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc0[ix + (0)][iy + (2)][iz + (0)] =
            Facet_m1_0_0_src_2_0_1_dest_0_0_1_Recv.
            Ridge_m1_0_0_Om_79_r_2_0_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc0[ix + (18)][iy + (0)][iz + (0)] =
            Facet_0_m1_0_src_1_1_1_dest_0_0_1_Recv.
            Ridge_0_m1_0_Om_79_r_1_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc0[ix + (2)][iy + (0)][iz + (0)] =
            Facet_0_m1_0_src_0_1_1_dest_0_0_1_Recv.
            Ridge_0_m1_0_Om_79_r_0_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc0[ix + (18)][iy + (28)][iz + (0)] =
            Ridge_0_0_0_Om_79_r_1_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc0[ix + (2)][iy + (28)][iz + (0)] =
            Ridge_0_0_0_Om_79_r_0_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc0[ix + (18)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_79_r_1_0_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Facet_m1_m1_0_src_2_1_1_dest_0_0_1_Recv.
            Ridge_m1_m1_0_Om_80_r_2_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc1[ix + (0)][iy + (28)][iz + (0)] =
            Facet_m1_0_0_src_2_1_1_dest_0_0_1_Recv.
            Ridge_m1_0_0_Om_80_r_2_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc1[ix + (0)][iy + (2)][iz + (0)] =
            Facet_m1_0_0_src_2_0_1_dest_0_0_1_Recv.
            Ridge_m1_0_0_Om_80_r_2_0_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc1[ix + (18)][iy + (0)][iz + (0)] =
            Facet_0_m1_0_src_1_1_1_dest_0_0_1_Recv.
            Ridge_0_m1_0_Om_80_r_1_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc1[ix + (2)][iy + (0)][iz + (0)] =
            Facet_0_m1_0_src_0_1_1_dest_0_0_1_Recv.
            Ridge_0_m1_0_Om_80_r_0_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc1[ix + (18)][iy + (28)][iz + (0)] =
            Ridge_0_0_0_Om_80_r_1_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 16; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc1[ix + (2)][iy + (28)][iz + (0)] =
            Ridge_0_0_0_Om_80_r_0_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 26; ++iy) {
        for (int iz = 0; iz < 262; ++iz) {
          Rsc1[ix + (18)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_80_r_1_0_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (2, 20, 2, 30, 0, 260, Rsc0, -1, -1, 1, Rsc1, -1, -1,
      1, Rsc0, 0, -1, 1, Rsc0, -2, -1, 1, Rsc0, -1, 0, 1, Rsc0, -1, -2, 1, Rsc0,
      -1, -1, 2, Rsc0, -1, -1, 0, Rsc3);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_0_0_1_dest_0_0_0_Send.
            Ridge_0_0_m1_Om_81_r_0_0_1_r_0_0_0[ix][iy][iz] =
            Rsc3[ix + (2)][iy + (2)][iz + (258)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_81_r_0_0_1_r_0_0_0[ix][iy][iz] =
            Rsc3[ix + (2)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_283 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (2, 20, 2, 30, 0, 260, Rsc1, -1, -1, 1, Rsc0, -1, -1,
      1, Rsc1, 0, -1, 1, Rsc1, -2, -1, 1, Rsc1, -1, 0, 1, Rsc1, -1, -2, 1, Rsc1,
      -1, -1, 2, Rsc1, -1, -1, 0, Rsc2);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_0_0_1_dest_0_0_0_Send.
            Ridge_0_0_m1_Om_82_r_0_0_1_r_0_0_0[ix][iy][iz] =
            Rsc2[ix + (2)][iy + (2)][iz + (258)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_82_r_0_0_1_r_0_0_0[ix][iy][iz] =
            Rsc2[ix + (2)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_284 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (0)] =
            Facet_m1_m1_0_src_2_1_1_dest_0_0_1_Recv.
            Ridge_m1_m1_0_Om_81_r_2_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc3[ix + (0)][iy + (30)][iz + (0)] =
            Facet_m1_0_0_src_2_1_1_dest_0_0_1_Recv.
            Ridge_m1_0_0_Om_81_r_2_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc3[ix + (0)][iy + (2)][iz + (0)] =
            Facet_m1_0_0_src_2_0_1_dest_0_0_1_Recv.
            Ridge_m1_0_0_Om_81_r_2_0_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc3[ix + (20)][iy + (0)][iz + (0)] =
            Facet_0_m1_0_src_1_1_1_dest_0_0_1_Recv.
            Ridge_0_m1_0_Om_81_r_1_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc3[ix + (2)][iy + (0)][iz + (0)] =
            Facet_0_m1_0_src_0_1_1_dest_0_0_1_Recv.
            Ridge_0_m1_0_Om_81_r_0_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc3[ix + (20)][iy + (30)][iz + (0)] =
            Ridge_0_0_0_Om_81_r_1_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc3[ix + (2)][iy + (30)][iz + (0)] =
            Ridge_0_0_0_Om_81_r_0_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc3[ix + (20)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_81_r_1_0_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (0)] =
            Facet_m1_m1_0_src_2_1_1_dest_0_0_1_Recv.
            Ridge_m1_m1_0_Om_82_r_2_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc2[ix + (0)][iy + (30)][iz + (0)] =
            Facet_m1_0_0_src_2_1_1_dest_0_0_1_Recv.
            Ridge_m1_0_0_Om_82_r_2_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc2[ix + (0)][iy + (2)][iz + (0)] =
            Facet_m1_0_0_src_2_0_1_dest_0_0_1_Recv.
            Ridge_m1_0_0_Om_82_r_2_0_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc2[ix + (20)][iy + (0)][iz + (0)] =
            Facet_0_m1_0_src_1_1_1_dest_0_0_1_Recv.
            Ridge_0_m1_0_Om_82_r_1_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc2[ix + (2)][iy + (0)][iz + (0)] =
            Facet_0_m1_0_src_0_1_1_dest_0_0_1_Recv.
            Ridge_0_m1_0_Om_82_r_0_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc2[ix + (20)][iy + (30)][iz + (0)] =
            Ridge_0_0_0_Om_82_r_1_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 18; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc2[ix + (2)][iy + (30)][iz + (0)] =
            Ridge_0_0_0_Om_82_r_0_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 28; ++iy) {
        for (int iz = 0; iz < 260; ++iz) {
          Rsc2[ix + (20)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_82_r_1_0_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (2, 22, 2, 32, 0, 258, Rsc3, -1, -1, 1, Rsc2, -1, -1,
      1, Rsc3, 0, -1, 1, Rsc3, -2, -1, 1, Rsc3, -1, 0, 1, Rsc3, -1, -2, 1, Rsc3,
      -1, -1, 2, Rsc3, -1, -1, 0, Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_0_0_1_dest_0_0_0_Send.
            Ridge_0_0_m1_Om_83_r_0_0_1_r_0_0_0[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (2)][iz + (256)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_83_r_0_0_1_r_0_0_0[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_285 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (2, 22, 2, 32, 0, 258, Rsc2, -1, -1, 1, Rsc3, -1, -1,
      1, Rsc2, 0, -1, 1, Rsc2, -2, -1, 1, Rsc2, -1, 0, 1, Rsc2, -1, -2, 1, Rsc2,
      -1, -1, 2, Rsc2, -1, -1, 0, Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_0_0_1_dest_0_0_0_Send.
            Ridge_0_0_m1_Om_84_r_0_0_1_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (2)][iz + (256)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_84_r_0_0_1_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_286 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Facet_m1_m1_0_src_2_1_1_dest_0_0_1_Recv.
            Ridge_m1_m1_0_Om_83_r_2_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc1[ix + (0)][iy + (32)][iz + (0)] =
            Facet_m1_0_0_src_2_1_1_dest_0_0_1_Recv.
            Ridge_m1_0_0_Om_83_r_2_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc1[ix + (0)][iy + (2)][iz + (0)] =
            Facet_m1_0_0_src_2_0_1_dest_0_0_1_Recv.
            Ridge_m1_0_0_Om_83_r_2_0_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc1[ix + (22)][iy + (0)][iz + (0)] =
            Facet_0_m1_0_src_1_1_1_dest_0_0_1_Recv.
            Ridge_0_m1_0_Om_83_r_1_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc1[ix + (2)][iy + (0)][iz + (0)] =
            Facet_0_m1_0_src_0_1_1_dest_0_0_1_Recv.
            Ridge_0_m1_0_Om_83_r_0_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc1[ix + (22)][iy + (32)][iz + (0)] =
            Ridge_0_0_0_Om_83_r_1_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc1[ix + (2)][iy + (32)][iz + (0)] =
            Ridge_0_0_0_Om_83_r_0_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc1[ix + (22)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_83_r_1_0_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Facet_m1_m1_0_src_2_1_1_dest_0_0_1_Recv.
            Ridge_m1_m1_0_Om_84_r_2_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc0[ix + (0)][iy + (32)][iz + (0)] =
            Facet_m1_0_0_src_2_1_1_dest_0_0_1_Recv.
            Ridge_m1_0_0_Om_84_r_2_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc0[ix + (0)][iy + (2)][iz + (0)] =
            Facet_m1_0_0_src_2_0_1_dest_0_0_1_Recv.
            Ridge_m1_0_0_Om_84_r_2_0_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc0[ix + (22)][iy + (0)][iz + (0)] =
            Facet_0_m1_0_src_1_1_1_dest_0_0_1_Recv.
            Ridge_0_m1_0_Om_84_r_1_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc0[ix + (2)][iy + (0)][iz + (0)] =
            Facet_0_m1_0_src_0_1_1_dest_0_0_1_Recv.
            Ridge_0_m1_0_Om_84_r_0_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc0[ix + (22)][iy + (32)][iz + (0)] =
            Ridge_0_0_0_Om_84_r_1_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 20; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc0[ix + (2)][iy + (32)][iz + (0)] =
            Ridge_0_0_0_Om_84_r_0_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 30; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc0[ix + (22)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_84_r_1_0_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (2, 24, 2, 34, 0, 256, Rsc1, -1, -1, 1, Rsc0, -1, -1,
      1, Rsc1, 0, -1, 1, Rsc1, -2, -1, 1, Rsc1, -1, 0, 1, Rsc1, -1, -2, 1, Rsc1,
      -1, -1, 2, Rsc1, -1, -1, 0, Rsc2);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_0_0_1_dest_0_0_0_Send.
            Ridge_0_0_m1_Om_85_r_0_0_1_r_0_0_0[ix][iy][iz] =
            Rsc2[ix + (2)][iy + (2)][iz + (254)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_85_r_0_0_1_r_0_0_0[ix][iy][iz] =
            Rsc2[ix + (2)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_287 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (2, 24, 2, 34, 0, 256, Rsc0, -1, -1, 1, Rsc1, -1, -1,
      1, Rsc0, 0, -1, 1, Rsc0, -2, -1, 1, Rsc0, -1, 0, 1, Rsc0, -1, -2, 1, Rsc0,
      -1, -1, 2, Rsc0, -1, -1, 0, Rsc3);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_0_0_1_dest_0_0_0_Send.
            Ridge_0_0_m1_Om_86_r_0_0_1_r_0_0_0[ix][iy][iz] =
            Rsc3[ix + (2)][iy + (2)][iz + (254)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_86_r_0_0_1_r_0_0_0[ix][iy][iz] =
            Rsc3[ix + (2)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_288 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (0)] =
            Facet_m1_m1_0_src_2_1_1_dest_0_0_1_Recv.
            Ridge_m1_m1_0_Om_85_r_2_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc2[ix + (0)][iy + (34)][iz + (0)] =
            Facet_m1_0_0_src_2_1_1_dest_0_0_1_Recv.
            Ridge_m1_0_0_Om_85_r_2_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc2[ix + (0)][iy + (2)][iz + (0)] =
            Facet_m1_0_0_src_2_0_1_dest_0_0_1_Recv.
            Ridge_m1_0_0_Om_85_r_2_0_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc2[ix + (24)][iy + (0)][iz + (0)] =
            Facet_0_m1_0_src_1_1_1_dest_0_0_1_Recv.
            Ridge_0_m1_0_Om_85_r_1_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc2[ix + (2)][iy + (0)][iz + (0)] =
            Facet_0_m1_0_src_0_1_1_dest_0_0_1_Recv.
            Ridge_0_m1_0_Om_85_r_0_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc2[ix + (24)][iy + (34)][iz + (0)] =
            Ridge_0_0_0_Om_85_r_1_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc2[ix + (2)][iy + (34)][iz + (0)] =
            Ridge_0_0_0_Om_85_r_0_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc2[ix + (24)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_85_r_1_0_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (0)] =
            Facet_m1_m1_0_src_2_1_1_dest_0_0_1_Recv.
            Ridge_m1_m1_0_Om_86_r_2_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc3[ix + (0)][iy + (34)][iz + (0)] =
            Facet_m1_0_0_src_2_1_1_dest_0_0_1_Recv.
            Ridge_m1_0_0_Om_86_r_2_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc3[ix + (0)][iy + (2)][iz + (0)] =
            Facet_m1_0_0_src_2_0_1_dest_0_0_1_Recv.
            Ridge_m1_0_0_Om_86_r_2_0_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc3[ix + (24)][iy + (0)][iz + (0)] =
            Facet_0_m1_0_src_1_1_1_dest_0_0_1_Recv.
            Ridge_0_m1_0_Om_86_r_1_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc3[ix + (2)][iy + (0)][iz + (0)] =
            Facet_0_m1_0_src_0_1_1_dest_0_0_1_Recv.
            Ridge_0_m1_0_Om_86_r_0_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc3[ix + (24)][iy + (34)][iz + (0)] =
            Ridge_0_0_0_Om_86_r_1_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 22; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc3[ix + (2)][iy + (34)][iz + (0)] =
            Ridge_0_0_0_Om_86_r_0_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Rsc3[ix + (24)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_86_r_1_0_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (2, 26, 2, 36, 0, 254, Rsc2, -1, -1, 1, Rsc3, -1, -1,
      1, Rsc2, 0, -1, 1, Rsc2, -2, -1, 1, Rsc2, -1, 0, 1, Rsc2, -1, -2, 1, Rsc2,
      -1, -1, 2, Rsc2, -1, -1, 0, Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_0_0_1_dest_0_0_0_Send.
            Ridge_0_0_m1_Om_87_r_0_0_1_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (2)][iz + (252)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_87_r_0_0_1_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_289 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (2, 26, 2, 36, 0, 254, Rsc3, -1, -1, 1, Rsc2, -1, -1,
      1, Rsc3, 0, -1, 1, Rsc3, -2, -1, 1, Rsc3, -1, 0, 1, Rsc3, -1, -2, 1, Rsc3,
      -1, -1, 2, Rsc3, -1, -1, 0, Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_0_0_1_dest_0_0_0_Send.
            Ridge_0_0_m1_Om_88_r_0_0_1_r_0_0_0[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (2)][iz + (252)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_88_r_0_0_1_r_0_0_0[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_29 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_83_r_0_0_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 258; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Ridge_0_0_0_Om_84_r_0_0_0_r_1_0_0[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (2, 23, 0, 32, 0, 256, Rsc1, -1, 1, 1, Rsc0, -1, 1, 1,
      Rsc1, 0, 1, 1, Rsc1, -2, 1, 1, Rsc1, -1, 2, 1, Rsc1, -1, 0, 1, Rsc1, -1,
      1, 2, Rsc1, -1, 1, 0, Rsc2);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Ridge_0_0_0_Om_85_r_1_0_0_r_2_0_0[ix][iy][iz] =
            Rsc2[ix + (21)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Ridge_0_0_0_Om_85_r_1_0_0_r_1_1_0[ix][iy][iz] =
            Rsc2[ix + (2)][iy + (30)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Ridge_0_0_0_Om_85_r_1_0_0_r_2_1_0[ix][iy][iz] =
            Rsc2[ix + (21)][iy + (30)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_85_r_1_0_0_r_1_0_1[ix][iy][iz] =
            Rsc2[ix + (2)][iy + (0)][iz + (254)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_85_r_1_0_0_r_2_0_1[ix][iy][iz] =
            Rsc2[ix + (21)][iy + (0)][iz + (254)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_85_r_1_0_0_r_1_1_1[ix][iy][iz] =
            Rsc2[ix + (2)][iy + (30)][iz + (254)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_85_r_1_0_0_r_2_1_1[ix][iy][iz] =
            Rsc2[ix + (21)][iy + (30)][iz + (254)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_0_0_dest_1_0_1_Send.
            Ridge_0_0_1_Om_85_r_1_0_0_r_1_0_1[ix][iy][iz] =
            Rsc2[ix + (2)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 32; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_0_0_dest_2_0_1_Send.
            Ridge_0_0_1_Om_85_r_1_0_0_r_2_0_1[ix][iy][iz] =
            Rsc2[ix + (21)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_0_0_dest_1_1_1_Send.
            Ridge_0_0_1_Om_85_r_1_0_0_r_1_1_1[ix][iy][iz] =
            Rsc2[ix + (2)][iy + (30)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_1_src_1_0_0_dest_2_1_1_Send.
            Ridge_0_0_1_Om_85_r_1_0_0_r_2_1_1[ix][iy][iz] =
            Rsc2[ix + (21)][iy + (30)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Facet_0_1_0_src_1_0_0_dest_1_1_0_Send.
            Ridge_0_1_0_Om_85_r_1_0_0_r_1_1_0[ix][iy][iz] =
            Rsc2[ix + (2)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 256; ++iz) {
          Facet_0_1_0_src_1_0_0_dest_2_1_0_Send.
            Ridge_0_1_0_Om_85_r_1_0_0_r_2_1_0[ix][iy][iz] =
            Rsc2[ix + (21)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_0_src_1_0_0_dest_1_1_1_Send.
            Ridge_0_1_0_Om_85_r_1_0_0_r_1_1_1[ix][iy][iz] =
            Rsc2[ix + (2)][iy + (0)][iz + (254)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_0_src_1_0_0_dest_2_1_1_Send.
            Ridge_0_1_0_Om_85_r_1_0_0_r_2_1_1[ix][iy][iz] =
            Rsc2[ix + (21)][iy + (0)][iz + (254)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 21; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_1_src_1_0_0_dest_1_1_1_Send.
            Ridge_0_1_1_Om_85_r_1_0_0_r_1_1_1[ix][iy][iz] =
            Rsc2[ix + (2)][iy + (0)][iz + (0)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_1_1_src_1_0_0_dest_2_1_1_Send.
            Ridge_0_1_1_Om_85_r_1_0_0_r_2_1_1[ix][iy][iz] =
            Rsc2[ix + (21)][iy + (0)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_290 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (0)][iy + (0)][iz + (0)] =
            Facet_m1_m1_0_src_2_1_1_dest_0_0_1_Recv.
            Ridge_m1_m1_0_Om_87_r_2_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (0)][iy + (36)][iz + (0)] =
            Facet_m1_0_0_src_2_1_1_dest_0_0_1_Recv.
            Ridge_m1_0_0_Om_87_r_2_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (0)][iy + (2)][iz + (0)] =
            Facet_m1_0_0_src_2_0_1_dest_0_0_1_Recv.
            Ridge_m1_0_0_Om_87_r_2_0_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (26)][iy + (0)][iz + (0)] =
            Facet_0_m1_0_src_1_1_1_dest_0_0_1_Recv.
            Ridge_0_m1_0_Om_87_r_1_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (2)][iy + (0)][iz + (0)] =
            Facet_0_m1_0_src_0_1_1_dest_0_0_1_Recv.
            Ridge_0_m1_0_Om_87_r_0_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (26)][iy + (36)][iz + (0)] =
            Ridge_0_0_0_Om_87_r_1_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (2)][iy + (36)][iz + (0)] =
            Ridge_0_0_0_Om_87_r_0_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc0[ix + (26)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_87_r_1_0_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (0)][iy + (0)][iz + (0)] =
            Facet_m1_m1_0_src_2_1_1_dest_0_0_1_Recv.
            Ridge_m1_m1_0_Om_88_r_2_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (0)][iy + (36)][iz + (0)] =
            Facet_m1_0_0_src_2_1_1_dest_0_0_1_Recv.
            Ridge_m1_0_0_Om_88_r_2_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (0)][iy + (2)][iz + (0)] =
            Facet_m1_0_0_src_2_0_1_dest_0_0_1_Recv.
            Ridge_m1_0_0_Om_88_r_2_0_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (26)][iy + (0)][iz + (0)] =
            Facet_0_m1_0_src_1_1_1_dest_0_0_1_Recv.
            Ridge_0_m1_0_Om_88_r_1_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (2)][iy + (0)][iz + (0)] =
            Facet_0_m1_0_src_0_1_1_dest_0_0_1_Recv.
            Ridge_0_m1_0_Om_88_r_0_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (26)][iy + (36)][iz + (0)] =
            Ridge_0_0_0_Om_88_r_1_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 24; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (2)][iy + (36)][iz + (0)] =
            Ridge_0_0_0_Om_88_r_0_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 34; ++iy) {
        for (int iz = 0; iz < 254; ++iz) {
          Rsc1[ix + (26)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_88_r_1_0_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (2, 28, 2, 38, 0, 252, Rsc0, -1, -1, 1, Rsc1, -1, -1,
      1, Rsc0, 0, -1, 1, Rsc0, -2, -1, 1, Rsc0, -1, 0, 1, Rsc0, -1, -2, 1, Rsc0,
      -1, -1, 2, Rsc0, -1, -1, 0, Rsc3);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_0_0_1_dest_0_0_0_Send.
            Ridge_0_0_m1_Om_89_r_0_0_1_r_0_0_0[ix][iy][iz] =
            Rsc3[ix + (2)][iy + (2)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_89_r_0_0_1_r_0_0_0[ix][iy][iz] =
            Rsc3[ix + (2)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_291 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (2, 28, 2, 38, 0, 252, Rsc1, -1, -1, 1, Rsc0, -1, -1,
      1, Rsc1, 0, -1, 1, Rsc1, -2, -1, 1, Rsc1, -1, 0, 1, Rsc1, -1, -2, 1, Rsc1,
      -1, -1, 2, Rsc1, -1, -1, 0, Rsc2);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_0_0_1_dest_0_0_0_Send.
            Ridge_0_0_m1_Om_90_r_0_0_1_r_0_0_0[ix][iy][iz] =
            Rsc2[ix + (2)][iy + (2)][iz + (250)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_90_r_0_0_1_r_0_0_0[ix][iy][iz] =
            Rsc2[ix + (2)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_292 ()
{
#pragma omp parallel
  {
#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (0)][iy + (0)][iz + (0)] =
            Facet_m1_m1_0_src_2_1_1_dest_0_0_1_Recv.
            Ridge_m1_m1_0_Om_89_r_2_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (0)][iy + (38)][iz + (0)] =
            Facet_m1_0_0_src_2_1_1_dest_0_0_1_Recv.
            Ridge_m1_0_0_Om_89_r_2_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (0)][iy + (2)][iz + (0)] =
            Facet_m1_0_0_src_2_0_1_dest_0_0_1_Recv.
            Ridge_m1_0_0_Om_89_r_2_0_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (28)][iy + (0)][iz + (0)] =
            Facet_0_m1_0_src_1_1_1_dest_0_0_1_Recv.
            Ridge_0_m1_0_Om_89_r_1_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (2)][iy + (0)][iz + (0)] =
            Facet_0_m1_0_src_0_1_1_dest_0_0_1_Recv.
            Ridge_0_m1_0_Om_89_r_0_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (28)][iy + (38)][iz + (0)] =
            Ridge_0_0_0_Om_89_r_1_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (2)][iy + (38)][iz + (0)] =
            Ridge_0_0_0_Om_89_r_0_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc3[ix + (28)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_89_r_1_0_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (0)][iy + (0)][iz + (0)] =
            Facet_m1_m1_0_src_2_1_1_dest_0_0_1_Recv.
            Ridge_m1_m1_0_Om_90_r_2_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (0)][iy + (38)][iz + (0)] =
            Facet_m1_0_0_src_2_1_1_dest_0_0_1_Recv.
            Ridge_m1_0_0_Om_90_r_2_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (0)][iy + (2)][iz + (0)] =
            Facet_m1_0_0_src_2_0_1_dest_0_0_1_Recv.
            Ridge_m1_0_0_Om_90_r_2_0_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (28)][iy + (0)][iz + (0)] =
            Facet_0_m1_0_src_1_1_1_dest_0_0_1_Recv.
            Ridge_0_m1_0_Om_90_r_1_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (2)][iy + (0)][iz + (0)] =
            Facet_0_m1_0_src_0_1_1_dest_0_0_1_Recv.
            Ridge_0_m1_0_Om_90_r_0_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (28)][iy + (38)][iz + (0)] =
            Ridge_0_0_0_Om_90_r_1_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 26; ++ix) {
      for (int iy = 0; iy < 2; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (2)][iy + (38)][iz + (0)] =
            Ridge_0_0_0_Om_90_r_0_1_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 2; ++ix) {
      for (int iy = 0; iy < 36; ++iy) {
        for (int iz = 0; iz < 252; ++iz) {
          Rsc2[ix + (28)][iy + (2)][iz + (0)] =
            Ridge_0_0_0_Om_90_r_1_0_1_r_0_0_1[ix][iy][iz];
        }
      }
    }

    Formura_subroutine_2 (2, 30, 2, 40, 0, 250, Rsc3, -1, -1, 1, Rsc2, -1, -1,
      1, Rsc3, 0, -1, 1, Rsc3, -2, -1, 1, Rsc3, -1, 0, 1, Rsc3, -1, -2, 1, Rsc3,
      -1, -1, 2, Rsc3, -1, -1, 0, Rsc1);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_0_0_1_dest_0_0_0_Send.
            Ridge_0_0_m1_Om_91_r_0_0_1_r_0_0_0[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (2)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_91_r_0_0_1_r_0_0_0[ix][iy][iz] =
            Rsc1[ix + (2)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}

void
Formura_internal_293 ()
{
#pragma omp parallel
  {
    Formura_subroutine_0 (2, 30, 2, 40, 0, 250, Rsc2, -1, -1, 1, Rsc3, -1, -1,
      1, Rsc2, 0, -1, 1, Rsc2, -2, -1, 1, Rsc2, -1, 0, 1, Rsc2, -1, -2, 1, Rsc2,
      -1, -1, 2, Rsc2, -1, -1, 0, Rsc0);

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Facet_0_0_m1_src_0_0_1_dest_0_0_0_Send.
            Ridge_0_0_m1_Om_92_r_0_0_1_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (2)][iz + (248)];
        }
      }
    }

#pragma omp for collapse(3)
    for (int ix = 0; ix < 28; ++ix) {
      for (int iy = 0; iy < 38; ++iy) {
        for (int iz = 0; iz < 2; ++iz) {
          Ridge_0_0_0_Om_92_r_0_0_1_r_0_0_0[ix][iy][iz] =
            Rsc0[ix + (2)][iy + (2)][iz + (0)];
        }
      }
    }

  }
}
