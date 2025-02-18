#pragma once

#include "../../JObject.hpp"

class JString;
namespace java::util
{
	class Locale;
}

namespace android::text
{
	class InputFilter_AllCaps : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit InputFilter_AllCaps(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		InputFilter_AllCaps(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		InputFilter_AllCaps();
		InputFilter_AllCaps(java::util::Locale arg0);
		
		// Methods
		JString filter(JString arg0, jint arg1, jint arg2, JObject arg3, jint arg4, jint arg5) const;
	};
} // namespace android::text

