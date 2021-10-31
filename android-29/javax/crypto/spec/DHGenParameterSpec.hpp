#pragma once

#include "../../../__JniBaseClass.hpp"


namespace javax::crypto::spec
{
	class DHGenParameterSpec : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DHGenParameterSpec(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DHGenParameterSpec(QAndroidJniObject obj);
		
		// Constructors
		DHGenParameterSpec(jint arg0, jint arg1);
		
		// Methods
		jint getExponentSize();
		jint getPrimeSize();
	};
} // namespace javax::crypto::spec

