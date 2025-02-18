#pragma once

#include "../../JObject.hpp"

class JObject;
class JString;

namespace android::media
{
	class MediaCodec_ParameterDescriptor : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaCodec_ParameterDescriptor(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaCodec_ParameterDescriptor(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		JString getName() const;
		jint getType() const;
		jint hashCode() const;
	};
} // namespace android::media

