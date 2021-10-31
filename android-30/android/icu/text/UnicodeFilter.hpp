#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::icu::text
{
	class UnicodeFilter : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit UnicodeFilter(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		UnicodeFilter(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean contains(jint arg0);
		jint matches(__JniBaseClass arg0, jintArray arg1, jint arg2, jboolean arg3);
	};
} // namespace android::icu::text

