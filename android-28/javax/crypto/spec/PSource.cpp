#include "../../../JString.hpp"
#include "./PSource.hpp"

namespace javax::crypto::spec
{
	// Fields
	
	// QAndroidJniObject forward
	PSource::PSource(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JString PSource::getAlgorithm() const
	{
		return callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		);
	}
} // namespace javax::crypto::spec

