#pragma once

#include "../../JObject.hpp"

namespace java::lang
{
	class StringBuilder;
}

namespace android::util
{
	class StringBuilderPrinter : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit StringBuilderPrinter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StringBuilderPrinter(QJniObject obj);
		
		// Constructors
		StringBuilderPrinter(java::lang::StringBuilder arg0);
		
		// Methods
		void println(jstring arg0);
	};
} // namespace android::util

