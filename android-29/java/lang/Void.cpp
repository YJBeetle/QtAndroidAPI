#include "../../JClass.hpp"
#include "./Void.hpp"

namespace java::lang
{
	// Fields
	JClass Void::TYPE()
	{
		return getStaticObjectField(
			"java.lang.Void",
			"TYPE",
			"Ljava/lang/Class;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace java::lang

