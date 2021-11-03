#pragma once

#include "../../JObject.hpp"

class JObject;
class JString;

namespace android::drm
{
	class DrmSupportInfo : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DrmSupportInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DrmSupportInfo(QJniObject obj);
		
		// Constructors
		DrmSupportInfo();
		
		// Methods
		void addFileSuffix(JString arg0);
		void addMimeType(JString arg0);
		jboolean equals(JObject arg0);
		JString getDescriprition();
		JString getDescription();
		JObject getFileSuffixIterator();
		JObject getMimeTypeIterator();
		jint hashCode();
		void setDescription(JString arg0);
	};
} // namespace android::drm

