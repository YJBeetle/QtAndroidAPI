#include "./ChildSessionConfiguration.hpp"
#include "./ChildSessionConfiguration_Builder.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	
	// QJniObject forward
	ChildSessionConfiguration_Builder::ChildSessionConfiguration_Builder(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ChildSessionConfiguration_Builder::ChildSessionConfiguration_Builder(__JniBaseClass arg0, __JniBaseClass arg1)
		: __JniBaseClass(
			"android.net.ipsec.ike.ChildSessionConfiguration$Builder",
			"(Ljava/util/List;Ljava/util/List;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	android::net::ipsec::ike::ChildSessionConfiguration ChildSessionConfiguration_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/ipsec/ike/ChildSessionConfiguration;"
		);
	}
} // namespace android::net::ipsec::ike

