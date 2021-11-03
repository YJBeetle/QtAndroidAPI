#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JObject;
class JString;

namespace android::drm
{
	class DrmInfo : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DrmInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DrmInfo(QJniObject obj);
		
		// Constructors
		DrmInfo(jint arg0, JByteArray arg1, JString arg2);
		DrmInfo(jint arg0, JString arg1, JString arg2);
		
		// Methods
		JObject get(JString arg0) const;
		JByteArray getData() const;
		jint getInfoType() const;
		JString getMimeType() const;
		JObject iterator() const;
		JObject keyIterator() const;
		void put(JString arg0, JObject arg1) const;
	};
} // namespace android::drm

