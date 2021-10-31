#include "./Void.hpp"

namespace java::lang
{
	// Fields
	jclass Void::TYPE()
	{
		return getStaticObjectField(
			"java.lang.Void",
			"TYPE",
			"Ljava/lang/Class;"
		).object<jclass>();
	}
	
	// QAndroidJniObject forward
	Void::Void(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace java::lang

