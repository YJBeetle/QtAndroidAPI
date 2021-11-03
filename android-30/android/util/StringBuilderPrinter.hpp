#pragma once

#include "../../JObject.hpp"

class JString;
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StringBuilderPrinter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StringBuilderPrinter(QAndroidJniObject obj);
		
		// Constructors
		StringBuilderPrinter(java::lang::StringBuilder arg0);
		
		// Methods
		void println(JString arg0) const;
	};
} // namespace android::util

