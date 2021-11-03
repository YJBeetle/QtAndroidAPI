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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DrmSupportInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DrmSupportInfo(QAndroidJniObject obj);
		
		// Constructors
		DrmSupportInfo();
		
		// Methods
		void addFileSuffix(JString arg0) const;
		void addMimeType(JString arg0) const;
		jboolean equals(JObject arg0) const;
		JString getDescriprition() const;
		JString getDescription() const;
		JObject getFileSuffixIterator() const;
		JObject getMimeTypeIterator() const;
		jint hashCode() const;
		void setDescription(JString arg0) const;
	};
} // namespace android::drm

