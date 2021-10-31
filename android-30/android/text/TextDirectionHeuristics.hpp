#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::text
{
	class TextDirectionHeuristics : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass ANYRTL_LTR();
		static __JniBaseClass FIRSTSTRONG_LTR();
		static __JniBaseClass FIRSTSTRONG_RTL();
		static __JniBaseClass LOCALE();
		static __JniBaseClass LTR();
		static __JniBaseClass RTL();
		
		// QJniObject forward
		template<typename ...Ts> explicit TextDirectionHeuristics(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TextDirectionHeuristics(QJniObject obj);
		
		// Constructors
		TextDirectionHeuristics();
		
		// Methods
	};
} // namespace android::text

