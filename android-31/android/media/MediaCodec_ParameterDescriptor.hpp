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
		MediaCodec_ParameterDescriptor(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0);
		JString getName();
		jint getType();
		jint hashCode();
	};
} // namespace android::media

