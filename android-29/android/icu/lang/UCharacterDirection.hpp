#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::icu::lang
{
	class UCharacterDirection : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit UCharacterDirection(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		UCharacterDirection(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jstring toString(jint arg0);
	};
} // namespace android::icu::lang

