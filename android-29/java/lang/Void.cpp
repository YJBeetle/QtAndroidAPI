#include "./Void.hpp"

namespace java::lang
{
	// Fields
	jclass Void::TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Void",
			"TYPE",
			"Ljava/lang/Class;"
		).object<jclass>();
	}
	
	Void::Void(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
} // namespace java::lang

