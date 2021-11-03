#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JObject;
class JString;
namespace java::util
{
	class UUID;
}

namespace android::media
{
	class DrmInitData_SchemeInitData : public JObject
	{
	public:
		// Fields
		static java::util::UUID UUID_NIL();
		JByteArray data();
		JString mimeType();
		java::util::UUID uuid();
		
		// QJniObject forward
		template<typename ...Ts> explicit DrmInitData_SchemeInitData(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DrmInitData_SchemeInitData(QJniObject obj);
		
		// Constructors
		DrmInitData_SchemeInitData(java::util::UUID arg0, JString arg1, JByteArray arg2);
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint hashCode() const;
	};
} // namespace android::media

