#pragma once

#include "../../JObject.hpp"

class JByteArray;
namespace android::media
{
	class MediaCas;
}
namespace java::util
{
	class ArrayList;
}

namespace android::media
{
	class MediaCas_Session : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaCas_Session(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaCas_Session(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void close() const;
		void processEcm(JByteArray arg0) const;
		void processEcm(JByteArray arg0, jint arg1, jint arg2) const;
		void setPrivateData(JByteArray arg0) const;
	};
} // namespace android::media

