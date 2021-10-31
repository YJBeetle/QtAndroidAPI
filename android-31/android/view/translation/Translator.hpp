#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class CancellationSignal;
}
namespace android::view::translation
{
	class TranslationRequest;
}

namespace android::view::translation
{
	class Translator : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Translator(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Translator(QJniObject obj);
		
		// Constructors
		
		// Methods
		void destroy();
		jboolean isDestroyed();
		void translate(android::view::translation::TranslationRequest arg0, android::os::CancellationSignal arg1, __JniBaseClass arg2, __JniBaseClass arg3);
	};
} // namespace android::view::translation

