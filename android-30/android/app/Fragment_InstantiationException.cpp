#include "../../java/lang/Exception.hpp"
#include "../../JString.hpp"
#include "./Fragment_InstantiationException.hpp"

namespace android::app
{
	// Fields
	
	// QJniObject forward
	Fragment_InstantiationException::Fragment_InstantiationException(QJniObject obj) : android::util::AndroidRuntimeException(obj) {}
	
	// Constructors
	Fragment_InstantiationException::Fragment_InstantiationException(JString arg0, java::lang::Exception arg1)
		: android::util::AndroidRuntimeException(
			"android.app.Fragment$InstantiationException",
			"(Ljava/lang/String;Ljava/lang/Exception;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	
	// Methods
} // namespace android::app

