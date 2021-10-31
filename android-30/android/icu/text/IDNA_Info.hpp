#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::icu::text
{
	class IDNA_Info : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IDNA_Info(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		IDNA_Info(QJniObject obj);
		
		// Constructors
		IDNA_Info();
		
		// Methods
		__JniBaseClass getErrors();
		jboolean hasErrors();
		jboolean isTransitionalDifferent();
	};
} // namespace android::icu::text

