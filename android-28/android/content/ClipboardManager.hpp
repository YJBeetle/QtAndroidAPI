#pragma once

#include "../text/ClipboardManager.hpp"

namespace android::content
{
	class ClipData;
}
namespace android::content
{
	class ClipDescription;
}
class JString;

namespace android::content
{
	class ClipboardManager : public android::text::ClipboardManager
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ClipboardManager(const char *className, const char *sig, Ts...agv) : android::text::ClipboardManager(className, sig, std::forward<Ts>(agv)...) {}
		ClipboardManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		void addPrimaryClipChangedListener(JObject arg0);
		void clearPrimaryClip();
		android::content::ClipData getPrimaryClip();
		android::content::ClipDescription getPrimaryClipDescription();
		JString getText();
		jboolean hasPrimaryClip();
		jboolean hasText();
		void removePrimaryClipChangedListener(JObject arg0);
		void setPrimaryClip(android::content::ClipData arg0);
		void setText(JString arg0);
	};
} // namespace android::content

