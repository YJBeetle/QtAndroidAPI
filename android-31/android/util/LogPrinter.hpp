#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::util
{
	class LogPrinter : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LogPrinter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LogPrinter(QAndroidJniObject obj);
		
		// Constructors
		LogPrinter(jint arg0, JString arg1);
		
		// Methods
		void println(JString arg0) const;
	};
} // namespace android::util

