#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class LocaleList;
}
namespace android::view::textclassifier
{
	class TextSelection_Request;
}
class JString;

namespace android::view::textclassifier
{
	class TextSelection_Request_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TextSelection_Request_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TextSelection_Request_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		TextSelection_Request_Builder(JString arg0, jint arg1, jint arg2);
		
		// Methods
		android::view::textclassifier::TextSelection_Request build() const;
		android::view::textclassifier::TextSelection_Request_Builder setDefaultLocales(android::os::LocaleList arg0) const;
		android::view::textclassifier::TextSelection_Request_Builder setExtras(android::os::Bundle arg0) const;
	};
} // namespace android::view::textclassifier

