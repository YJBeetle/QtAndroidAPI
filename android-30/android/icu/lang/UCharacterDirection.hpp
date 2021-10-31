#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::icu::lang
{
	class UCharacterDirection : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UCharacterDirection(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		UCharacterDirection(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jstring toString(jint arg0);
	};
} // namespace android::icu::lang

