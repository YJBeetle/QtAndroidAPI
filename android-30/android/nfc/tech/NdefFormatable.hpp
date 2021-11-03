#pragma once

#include "../../../JObject.hpp"

namespace android::nfc
{
	class NdefMessage;
}
namespace android::nfc
{
	class Tag;
}

namespace android::nfc::tech
{
	class NdefFormatable : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit NdefFormatable(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NdefFormatable(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::nfc::tech::NdefFormatable get(android::nfc::Tag arg0);
		void close() const;
		void connect() const;
		void format(android::nfc::NdefMessage arg0) const;
		void formatReadOnly(android::nfc::NdefMessage arg0) const;
		android::nfc::Tag getTag() const;
		jboolean isConnected() const;
	};
} // namespace android::nfc::tech

