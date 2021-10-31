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
	
	// QJniObject forward
	Void::Void(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace java::lang

