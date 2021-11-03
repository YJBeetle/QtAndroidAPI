#pragma once

#include "../../JObject.hpp"


namespace android::util
{
	class LogPrinter : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit LogPrinter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LogPrinter(QJniObject obj);
		
		// Constructors
		LogPrinter(jint arg0, jstring arg1);
		
		// Methods
		void println(jstring arg0);
	};
} // namespace android::util

