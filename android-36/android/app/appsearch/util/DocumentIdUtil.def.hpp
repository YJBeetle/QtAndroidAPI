#pragma once

#include "../../../../JObject.hpp"

namespace android::app::appsearch
{
	class GenericDocument;
}
class JString;

namespace android::app::appsearch::util
{
	class DocumentIdUtil : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DocumentIdUtil(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DocumentIdUtil(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static JString createQualifiedId(JString arg0, JString arg1, android::app::appsearch::GenericDocument arg2);
		static JString createQualifiedId(JString arg0, JString arg1, JString arg2, JString arg3);
	};
} // namespace android::app::appsearch::util

