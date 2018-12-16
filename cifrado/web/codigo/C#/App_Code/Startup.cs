using Microsoft.Owin;
using Owin;

[assembly: OwinStartupAttribute(typeof(CifradoCesarWeb.Startup))]
namespace CifradoCesarWeb
{
    public partial class Startup {
        public void Configuration(IAppBuilder app) {
            ConfigureAuth(app);
        }
    }
}
