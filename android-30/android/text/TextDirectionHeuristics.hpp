#pragma once

#include "../../JObject.hpp"

namespace android::text
{
	class TextDirectionHeuristics : public JObject
	{
	public:
		// Fields
		static JObject ANYRTL_LTR();
		static JObject FIRSTSTRONG_LTR();
		static JObject FIRSTSTRONG_RTL();
		static JObject LOCALE();
		static JObject LTR();
		static JObject RTL();
		
		// QJniObject forward
		template<typename ...Ts> explicit TextDirectionHeuristics(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TextDirectionHeuristics(QJniObject obj);
		
		// Constructors
		TextDirectionHeuristics();
		
		// Methods
	};
} // namespace android::text

