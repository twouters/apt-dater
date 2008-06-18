
#ifndef _STATS_H
#define _STATS_H

#include <glib-2.0/glib.h>
#include "apt-dater.h"

Category
getUpdatesFromStat(gchar *hostname, GList *updates, guint *stat);

void
getOldestMtime(GList *hosts);

void
freeUpdates(GList *updates);

gboolean refreshStats(GList *);
gboolean setStatsFileFromIOC(GIOChannel *, GIOCondition, gpointer);
gchar *getStatsFileName(const gchar *);
gchar *getStatsFile(const gchar *);
gboolean removeStatsFile(const gchar *);
Category getUpdatesFromStat(gchar *, GList *, guint *);
void refreshStatsOfNode(gpointer);

#endif /* _STATS_H */
