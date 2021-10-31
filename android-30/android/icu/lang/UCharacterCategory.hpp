#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::icu::lang
{
	class UCharacterCategory : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit UCharacterCategory(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		UCharacterCategory(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jstring toString(jint arg0);
	};
} // namespace android::icu::lang

