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
	
	// QJniObject forward
	Void::Void(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace java::lang

