#pragma once

#include "../../JObject.hpp"

class JByteArray;

namespace android::media
{
	class TimedMetaData : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TimedMetaData(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TimedMetaData(QJniObject obj);
		
		// Constructors
		TimedMetaData(jlong arg0, JByteArray arg1);
		
		// Methods
		JByteArray getMetaData() const;
		jlong getTimestamp() const;
	};
} // namespace android::media

