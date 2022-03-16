#pragma once

#include "../../../JObject.hpp"

class JArray;
namespace android::content
{
	class Context;
}
namespace android::se::omapi
{
	class Reader;
}
class JString;

namespace android::se::omapi
{
	class SEService : public JObject
	{
	public:
		// Fields
		static JString ACTION_SECURE_ELEMENT_STATE_CHANGED();
		static JString EXTRA_READER_NAME();
		static JString EXTRA_READER_STATE();
		
		// QJniObject forward
		template<typename ...Ts> explicit SEService(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SEService(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		SEService(android::content::Context arg0, JObject arg1, JObject arg2);
		
		// Methods
		JArray getReaders() const;
		android::se::omapi::Reader getUiccReader(jint arg0) const;
		JString getVersion() const;
		jboolean isConnected() const;
		void shutdown() const;
	};
} // namespace android::se::omapi

