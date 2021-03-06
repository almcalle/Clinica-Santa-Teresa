<header class="main-header">
  <a href="menu.php" class="logo">
    <!-- LOGO -->
    <i class="glyphicon glyphicon-cog"></i>
  </a>
  <!-- Header Navbar: style can be found in header.less -->
  <nav class="navbar navbar-static-top" role="navigation">
    <!--Boton Menu -->
    <a class="sidebar-toggle" role="button" data-toggle="offcanvas" href="#">
       <i class="glyphicon glyphicon-menu-hamburger"></i>

    </a>

    <!-- Navbar Right Menu -->

    <div class="navbar-custom-menu">
      <ul class="nav navbar-nav">
        <!-- Messages: style can be found in dropdown.less-->
        <li class="dropdown user user-menu">
<a href="php/cerrar-sesion.php">Salir</a>
          <ul class="dropdown-menu">
            <!-- User image -->
            <li

            </li>
            <!-- Menu Footer-->
            <li class="user-footer">

          </ul>
        </li>
      </ul>
    </div>
  </nav>
</header>

      <aside class="main-sidebar">
        <!-- sidebar: style can be found in sidebar.less -->
        <section class="sidebar">
          <!-- Sidebar user panel -->
          <div class="user-panel">
            <div class="pull-left image">
             <!-- imagen del usuario -->
            </div>
<!--Boton cerrrar-->
          </div>
          <!-- AQUI COMIENZA EL MENU -->
          <ul class="sidebar-menu">
              <li class="header">PANEL DE NAVEGACION</li>

                <li class="treeview">
                  <a href="#">
                    <i class="glyphicon glyphicon-file"></i>
                    <span>Ficha de Salud</span>
                    <i class="glyphicon glyphicon-chevron-left pull-right"></i>
                  </a>
                  <ul class="treeview-menu">
                    <li><a href="nuevaFicha.php"><i class="glyphicon glyphicon-asterisk text-orange"></i> Registrar Nuevo Paciente</a></li>
                    <li><a href="consultaFicha.php"><i class="glyphicon glyphicon-asterisk text-orange"></i> Control Ficha</a></li>
                  </ul>
                </li>

                <!--Busqueda-->
                <li class="treeview">
                  <a href="busqueda.php">
                    <i class="glyphicon glyphicon-search"></i>
                    <span>Busqueda</span>
                  </a>
                </li>
                <!--Examen Físico-->
                <li class="treeview">
                  <a href="#">
                    <i class="glyphicon glyphicon-scale"></i>
                    <span>Examen Físico</span>
                    <i class="glyphicon glyphicon-chevron-left pull-right"></i>
                  </a>
                  <ul class="treeview-menu">
                    <li><a href="consultaExamen.php"><i class="glyphicon glyphicon-asterisk  text-orange"></i> Consultar Examen Físico</a></li>
                  </ul>
                </li>

                <!--Anamnesis -->
               <li class="treeview">
                  <a href="#">
                    <i class="glyphicon glyphicon-plus-sign"></i>
                    <span>Anamnesis</span>
                    <i class="glyphicon glyphicon-chevron-left pull-right"></i>
                  </a>
                  <ul class="treeview-menu">
                    <li><a href="consultaAnamnesis.php"><i class="glyphicon
                      glyphicon-asterisk  text-orange"></i> Consultar Anamnesis</a></li>
                  </ul>
                </li>

                <!--Examen de Laboratorio-->
                <li class="treeview">
                  <a href="#">
                    <i class="glyphicon glyphicon-level-up"></i>
                    <span>Examen de Laboratorio</span>
                    <i class="glyphicon glyphicon-chevron-left pull-right"></i>
                  </a>
                  <ul class="treeview-menu">
                    <li><a href="consultaExamenLaboratorio.php">
                      <i class="glyphicon glyphicon-asterisk  text-orange"></i>
                      Consultar Examen</a></li>
                  </ul>
                </li>
                <!--Diagnosticos-->
                <li class="treeview">
                  <a href="#">
                    <i class="glyphicon glyphicon-heart"></i>
                    <span>Diagnostico</span>
                    <i class="glyphicon glyphicon-chevron-left pull-right"></i>
                    <ul class="treeview-menu">
                    <li><a href="consultaDiagnostico.php"><i class="glyphicon glyphicon-asterisk  text-orange"></i> Consultar Diagnostico</a></li>
                    </ul>
                  </a>
                </li>
                <!--fin dignostico-->
                <!--Tratamiento-->
                <li class="treeview">
                  <a href="#">
                    <i class="glyphicon glyphicon-inbox"></i>
                    <span>Tratamiento</span>
                    <i class="glyphicon glyphicon-chevron-left pull-right"></i>
                    <ul class="treeview-menu">
                    <li><a href="consultaTratamiento.php"><i class="glyphicon glyphicon-asterisk  text-orange"></i> Consultar Diagnostico</a></li>
                    </ul>
                  </a>
                </li>
                <!--fin Tratamiento-->

                <!--Citas-->
                <li class="treeview">
                  <a href="#">
                    <i class="glyphicon glyphicon-time"></i>
                    <span>Citas</span>
                    <i class="glyphicon glyphicon-chevron-left pull-right"></i>
                    <ul class="treeview-menu">
                    <li><a href="consultaCitas.php"><i class="glyphicon glyphicon-asterisk  text-orange"></i> Consultar Citas</a></li>
                    </ul>
                  </a>
                </li>
                <!--fin Tratamiento-->

          </ul>

        </section>
        <!-- /.sidebar -->
      </aside>
