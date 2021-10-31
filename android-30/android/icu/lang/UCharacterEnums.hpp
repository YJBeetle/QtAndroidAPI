#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::icu::lang
{
	class UCharacterEnums : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UCharacterEnums(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		UCharacterEnums(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::icu::lang

